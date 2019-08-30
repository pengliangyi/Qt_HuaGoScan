#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scansettingsdialog.h"
#include <QMouseEvent>
#include <QFileDialog>
#include <QMessageBox>
#include <QButtonGroup>

#define MARGIN 5

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->setMouseTracking(true);
    _isleftpressed = false;
    _curpos = 0;//标记鼠标左击时的位置

    globalImg = nullptr;//清空全局图像
    globalImgPath = "";//清空全局图像路径
    pic = new QGraphicsScene;
    ui->graphicsView->setScene(pic);
    isViewFit = true;//窗口拖动时是否实时适屏显示

    connect(ui->btn_scanSettings,SIGNAL(clicked()),this,SLOT(showSettingsDialog()));
    connect(this,SIGNAL(ImgViewAvailable(bool)),this,SLOT(on_ImgViewAvailable_changed(bool)));

    initInterface();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//mouse events(4)
void MainWindow::mousePressEvent(QMouseEvent *event)
    {
        if (event->button() == Qt::LeftButton)
        {
            this->_isleftpressed = true;
            QPoint temp = event->globalPos();
            _plast = temp;
            _curpos = countFlag(event->pos(), countRow(event->pos()));
            event->ignore();
        }
    }
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (_isleftpressed)
        _isleftpressed = false;
    setCursor(Qt::ArrowCursor);
    event->ignore();
}
void MainWindow::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        if (windowState() != Qt::WindowFullScreen)
            setWindowState(Qt::WindowFullScreen);
        else setWindowState(Qt::WindowNoState);//恢复正常模式
    }
    event->ignore();
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)//鼠标移动事件
{

    int poss = countFlag(event->pos(), countRow(event->pos()));
    setCursorType(poss);
    if (_isleftpressed)//是否左击
    {
        QPoint ptemp = event->globalPos();
        ptemp = ptemp - _plast;
        if (_curpos == 22)//移动窗口
        {
            ptemp = ptemp + pos();
            move(ptemp);
        }
        else
        {
            QRect wid = geometry();
            switch (_curpos)//改变窗口的大小
            {

            case 11:wid.setTopLeft(wid.topLeft() + ptemp); break;//左上角
            case 13:wid.setTopRight(wid.topRight() + ptemp); break;//右上角
            case 31:wid.setBottomLeft(wid.bottomLeft() + ptemp); break;//左下角
            case 33:wid.setBottomRight(wid.bottomRight() + ptemp); break;//右下角
            case 12:wid.setTop(wid.top() + ptemp.y()); break;//中上角
            case 21:wid.setLeft(wid.left() + ptemp.x()); break;//中左角
            case 23:wid.setRight(wid.right() + ptemp.x()); break;//中右角
            case 32:wid.setBottom(wid.bottom() + ptemp.y()); break;//中下角
            }
            setGeometry(wid);
        }

        _plast = event->globalPos();//更新位置
    }
    event->ignore();
}
//mouse functions(3)
int MainWindow::countFlag(QPoint p, int row)//计算鼠标在哪一列和哪一行
{
    if (p.y()<MARGIN)
        return 10 + row;
    else if (p.y()>this->height() - MARGIN)
        return 30 + row;
    else
        return 20 + row;
}
void MainWindow::setCursorType(int flag)//根据鼠标所在位置改变鼠标指针形状
{
    Qt::CursorShape cursor;
    switch (flag)
    {
    case 11:
    case 33:
        cursor = Qt::SizeFDiagCursor; break;
    case 13:
    case 31:
        cursor = Qt::SizeBDiagCursor; break;
    case 21:
    case 23:
        cursor = Qt::SizeHorCursor; break;
    case 12:
    case 32:
        cursor = Qt::SizeVerCursor; break;
    case 22:
        //cursor = Qt::OpenHandCursor; break;
        cursor = Qt::ArrowCursor; break;
    default:
        cursor = Qt::ArrowCursor; break;

    }
    setCursor(cursor);
}
int MainWindow::countRow(QPoint p)//计算在哪一列
{
    return (p.x()<MARGIN) ? 1 : (p.x()>(this->width() - MARGIN) ? 3 : 2);
}

//my Functions (4)
void MainWindow::freshDisplayImg(QImage *img,int width,int height)
{
    pic->clear();
    *img = img->scaled(width,height,Qt::KeepAspectRatio);
    QRectF rectf;
    rectf = QRectF(0,0,img->width(),img->height());
    pic->setSceneRect(rectf);
    pic->addPixmap(QPixmap::fromImage(*img));
    emit ImgViewAvailable(true);
}
void MainWindow::viewFit()
{
    isViewFit = true;
    QImage img = *globalImg;
    freshDisplayImg(&img,ui->graphicsView->width(),ui->graphicsView->height());
}
void MainWindow::showSettingsDialog(){
    scanSettingsDialog d;
    d.exec();
}
void MainWindow::initInterface()
{
    emit ImgViewAvailable(false);
}

//win_btn slot(1)
void MainWindow::on_win_btn_close_clicked()
{
    close();
}

//shortcut btn slots(8)
void MainWindow::on_btn_open_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,QStringLiteral("打开图像"),"./",QStringLiteral("(*.jpg *.png *.bmp)"));
    if(!fileName.isEmpty())
    {
        if(globalImg != nullptr)
        {
            delete globalImg;
            globalImg = nullptr;
        }
        globalImg = new QImage(fileName);
        if(globalImg->isNull())
        {
            delete globalImg;
            globalImg = nullptr;
            QMessageBox::information(this,QStringLiteral("信息"),QStringLiteral("打开图像失败"));
        }
        else
        {
            globalImgPath = fileName;
            viewFit();
        }
    }
}
void MainWindow::on_btn_save_clicked()
{
    if(globalImgPath.isEmpty())
    {
        QString filename = QFileDialog::getSaveFileName(this,QStringLiteral("图像保存到"),"",QStringLiteral("(*.jpg);;(*.png);;(*.bmp)"));
        globalImg->save(filename);
    }
    else
    {
        globalImg->save(globalImgPath);
        QMessageBox::information(this,QStringLiteral("信息"),QStringLiteral("图像保存完毕"));
    }
}
void MainWindow::on_btn_saveAs_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this,QStringLiteral("图像另存为"),"",QStringLiteral("(*.jpg);;(*.png);;(*.bmp)"));
    globalImg->save(filename);
}
void MainWindow::on_btn_close_clicked()
{
    pic->clear();
    globalImg = nullptr;
    globalImgPath = "";
    emit ImgViewAvailable(false);
}
void MainWindow::on_btn_zoomIn_clicked()
{
    isViewFit = false;
    double step = 1.2;
    double h = pic->height();
    double w = pic->width();
    if((h >= globalImg->height()*2.0) || (w >= globalImg->width()*2.0))
    {
        return;
    }
    else
    {
        QImage img = *globalImg;
        freshDisplayImg(&img,w*step,h*step);
    }
}
void MainWindow::on_btn_zoomOut_clicked()
{
    isViewFit = false;
    double step = 0.8;
    double h = pic->height();
    double w = pic->width();
    if((h <= globalImg->height()*0.1) || (w <= globalImg->width()*0.1))
    {
        return;
    }
    else
    {
        QImage img = *globalImg;
        freshDisplayImg(&img,w*step,h*step);
    }
}
void MainWindow::on_btn_zoomReal_clicked()
{
    isViewFit = false;
    freshDisplayImg(globalImg,globalImg->width(),globalImg->height());
}
void MainWindow::on_btn_zoomFit_clicked()
{
    viewFit();
}
void MainWindow::on_btn_antiClock_clicked()
{
    QMatrix m;
    m.rotate(-90.0);
    *globalImg = globalImg->transformed(m,Qt::FastTransformation);
    viewFit();
}
void MainWindow::on_btn_clock_clicked()
{
    QMatrix m;
    m.rotate(90.0);
    *globalImg = globalImg->transformed(m,Qt::FastTransformation);
    viewFit();
}

//exclution logic slot (1)
void MainWindow::on_ImgViewAvailable_changed(bool isAvailable)
{
    if(isAvailable)
    {
        ui->btn_close->setEnabled(true);
        ui->btn_save->setEnabled(true);
        ui->btn_saveAs->setEnabled(true);
        ui->btn_delete->setEnabled(true);
        ui->btn_zoomIn->setEnabled(true);
        ui->btn_zoomOut->setEnabled(true);
        ui->btn_zoomReal->setEnabled(true);
        ui->btn_zoomFit->setEnabled(true);
        ui->btn_clock->setEnabled(true);
        ui->btn_antiClock->setEnabled(true);
    }
    else
    {
        ui->btn_close->setEnabled(false);
        ui->btn_save->setEnabled(false);
        ui->btn_saveAs->setEnabled(false);
        ui->btn_delete->setEnabled(false);
        ui->btn_zoomIn->setEnabled(false);
        ui->btn_zoomOut->setEnabled(false);
        ui->btn_zoomReal->setEnabled(false);
        ui->btn_zoomFit->setEnabled(false);
        ui->btn_clock->setEnabled(false);
        ui->btn_antiClock->setEnabled(false);
    }
}


