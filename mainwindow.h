#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QGraphicsScene>


namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    int countFlag(QPoint p, int row);
    void setCursorType(int flag);
    int countRow(QPoint p);
    Ui::MainWindow *ui;

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void ImgViewAvailable(bool isAvailable);

private slots:
    void on_win_btn_close_clicked();

    void on_btn_scan_clicked();
    void on_btn_open_clicked();
    void on_btn_save_clicked();
    void on_btn_saveAs_clicked();
    void on_btn_close_clicked();
    void on_btn_zoomIn_clicked();
    void on_btn_zoomOut_clicked();
    void on_btn_zoomReal_clicked();
    void on_btn_zoomFit_clicked();
    void on_btn_antiClock_clicked();
    void on_btn_clock_clicked();

    void showSettingsDialog();
    void on_ImgViewAvailable_changed(bool isAvailable);



    void on_win_btn_max_clicked();

    void on_win_btn_min_clicked();

private:
    bool _isleftpressed;
    int _curpos;
    QPoint _plast;

    QImage *globalImg;
    QString globalImgPath;
    QGraphicsScene *pic;
    void viewFit();
    void freshDisplayImg(QImage *img,int width,int height);
    void initInterface();
    bool isViewFit;
    bool isScanning;

};

#endif // MAINWINDOW_H
