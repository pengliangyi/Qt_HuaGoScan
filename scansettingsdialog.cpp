#include "scansettingsdialog.h"
#include "ui_scansettingsdialog.h"
#include <QButtonGroup>

scanSettingsDialog::scanSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scanSettingsDialog)
{
    ui->setupUi(this);
    set_globalLogic();
    set_defaults();
}

scanSettingsDialog::~scanSettingsDialog()
{
    delete ui;
}

//my Functions (2)
void scanSettingsDialog::set_globalLogic()
{
    QButtonGroup *bg1 = new QButtonGroup(this);
    bg1->addButton(ui->rbtn_maxPage,0);
    bg1->addButton(ui->rbtn_pageNum,1);
    QButtonGroup *bg2 = new QButtonGroup(this);
    bg2->addButton(ui->rbtn_sharpening1,0);
    bg2->addButton(ui->rbtn_sharpening2,1);
    bg2->addButton(ui->rbtn_blur1,2);
    bg2->addButton(ui->rbtn_blur2,3);
}
void scanSettingsDialog::set_defaults()
{
    ui->cbox_colorMode->setCurrentIndex(0);//基本：色彩模式：24位彩色
    ui->cbtn_multiStream->setCheckState(Qt::Unchecked);//基本：多流输出：不勾选
    ui->cbox_multiStream->setCurrentIndex(0);//基本：多流输出：彩色+灰度+黑白
    ui->cbox_multiStream->setEnabled(false);
    ui->cbox_paperSize->setCurrentIndex(1);//基本：纸张尺寸：A3
    ui->cbox_resolution->setCurrentIndex(2);//基本：分辨率DPI：200
    ui->cbox_scanPage->setCurrentIndex(1);//基本：扫描面：双面

    ui->Slider_brightness->setValue(128);//亮度：128
    ui->spin_brightness->setValue(128);
    ui->Slider_contrast->setValue(4);//对比度：4
    ui->spin_contrast->setValue(4);
    ui->Slider_gamma->setValue(10);//伽马值：1.0
    ui->dSpin_gamma->setValue(1.0);


    ui->cbtn_deBlack->setCheckState(Qt::Unchecked);//基本图像处理：消除黑框：不勾选
    ui->cbtn_adjust->setCheckState(Qt::Unchecked);//基本图像处理：自动纠偏：不勾选
    ui->cbtn_deMoire->setCheckState(Qt::Unchecked);//基本图像处理：去除摩尔纹：不勾选
    ui->cbtn_deHole->setCheckState(Qt::Unchecked);//基本图像处理：穿孔移除：不勾选
    ui->label_deHole->setEnabled(false);
    ui->Slider_deHole->setValue(1);
    ui->Slider_deHole->setEnabled(false);
    ui->label_deHolePara->setText("10%");
    ui->label_deHolePara->setEnabled(false);
    ui->cbox_deColor->setCurrentIndex(0);//滤镜：除色：不除色
    ui->label_deColor->setEnabled(false);
    ui->cbox_deColor->setEnabled(false);
    ui->cbtn_setBWDot->setCheckState(Qt::Unchecked);//滤镜：错误扩散：不勾选
    ui->cbtn_setBWDot->setEnabled(false);
    ui->cbtn_colorAdjust->setCheckState(Qt::Unchecked);//滤镜：色彩修正：不勾选
    ui->cbtn_sharAndBlur->setCheckState(Qt::Unchecked);//滤镜：锐化与模糊：不勾选
    ui->rbtn_sharpening1->setChecked(true);
    ui->rbtn_sharpening1->setEnabled(false);
    ui->rbtn_sharpening2->setEnabled(false);
    ui->rbtn_blur1->setEnabled(false);
    ui->rbtn_blur2->setEnabled(false);
    ui->cbtn_specialMulti->setCheckState(Qt::Unchecked);//特殊图像处理：多流输出：不勾选
    ui->cbtn_deRed_asheet->setCheckState(Qt::Unchecked);//特殊图像处理：答题卡除红：不勾选

    ui->rbtn_maxPage->setChecked(true);//送纸：连续扫描：选中
    ui->rbtn_pageNum->setChecked(false);//送纸：指定张数：不选中
    ui->spin_pageNum->setValue(1);
    ui->spin_pageNum->setEnabled(false);
    ui->cbtn_doubleCheck->setCheckState(Qt::Unchecked);//送纸：双张检测：不勾选
    ui->cbtn_skewCheck->setCheckState(Qt::Unchecked);//送纸：歪斜检测：不勾选
    ui->Slider_skewCheck->setValue(3);
    ui->Slider_skewCheck->setEnabled(false);
    ui->label_skewCheck->setText(QStringLiteral("适中"));
    ui->label_skewCheck->setEnabled(false);
    ui->cbtn_stapleCheck->setCheckState(Qt::Unchecked);//送纸：订书钉检测：不勾选
    ui->cbox_pageDirection->setCurrentIndex(0);//送纸：文稿方向：不旋转
    ui->cbtn_backRotate_180->setCheckState(Qt::Unchecked);//送纸：背面旋转180°：不勾选

    ui->cbtn_imgSplit->setCheckState(Qt::Unchecked);//其他：图像拆分：不勾选
    ui->cbtn_jpgPercent->setCheckState(Qt::Unchecked);//其他：JPG压缩比：不勾选
    ui->Slider_jpgPercent->setValue(10);//其他：JPG压缩比：100%
    ui->label_jpgPercentPara->setText("100%");
    ui->label_jpgPercent->setEnabled(false);
    ui->Slider_jpgPercent->setEnabled(false);
    ui->label_jpgPercentPara->setEnabled(false);
}

//exclution logic slots(10)
void scanSettingsDialog::on_cbox_colorMode_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0:
        ui->label_deColor->setEnabled(false);
        ui->cbox_deColor->setEnabled(false);
        ui->cbtn_setBWDot->setEnabled(false);
        ui->cbtn_colorAdjust->setEnabled(true);
        ui->gbox_specialImgProc->setEnabled(true);
        break;
    case 1:
        ui->label_deColor->setEnabled(true);
        ui->cbox_deColor->setEnabled(true);
        ui->cbtn_setBWDot->setEnabled(false);
        ui->cbtn_colorAdjust->setEnabled(false);
        ui->gbox_specialImgProc->setEnabled(false);
        break;
    case 2:
        ui->label_deColor->setEnabled(true);
        ui->cbox_deColor->setEnabled(true);
        ui->cbtn_setBWDot->setEnabled(true);
        ui->cbtn_colorAdjust->setEnabled(false);
        ui->gbox_specialImgProc->setEnabled(false);
        break;
    default:
        ui->label_deColor->setEnabled(false);
        ui->cbox_deColor->setEnabled(false);
        ui->cbtn_setBWDot->setEnabled(false);
        ui->cbtn_colorAdjust->setEnabled(true);
        ui->gbox_specialImgProc->setEnabled(true);
    }
}
void scanSettingsDialog::on_cbtn_multiStream_stateChanged(int arg1)
{
    switch (arg1)
    {
    case 0:
        ui->cbox_multiStream->setEnabled(false);
        ui->label_colorMode->setEnabled(true);
        ui->cbox_colorMode->setEnabled(true);
        if(ui->cbox_colorMode->currentIndex() == 0)
        {
            ui->cbtn_colorAdjust->setEnabled(true);
            ui->gbox_specialImgProc->setEnabled(true);
        }
        else
        {
            ui->label_deColor->setEnabled(true);
            ui->cbox_deColor->setEnabled(true);
            if(ui->cbox_colorMode->currentIndex() == 2)
            {
                ui->cbtn_setBWDot->setEnabled(true);
            }
        }
        break;
    case 1:
    case 2:
        ui->cbox_multiStream->setEnabled(true);
        ui->label_colorMode->setEnabled(false);
        ui->cbox_colorMode->setEnabled(false);
        ui->label_deColor->setEnabled(false);
        ui->cbox_deColor->setEnabled(false);
        ui->cbtn_setBWDot->setEnabled(false);
        ui->cbtn_colorAdjust->setEnabled(false);
        ui->gbox_specialImgProc->setEnabled(false);
        break;
    default:
        ui->cbox_multiStream->setEnabled(false);
        ui->label_colorMode->setEnabled(true);
        ui->cbox_colorMode->setEnabled(true);
        if(ui->cbox_colorMode->currentIndex() == 0)
        {
            ui->cbtn_colorAdjust->setEnabled(true);
            ui->gbox_specialImgProc->setEnabled(true);
        }
        else
        {
            ui->label_deColor->setEnabled(true);
            ui->cbox_deColor->setEnabled(true);
            if(ui->cbox_colorMode->currentIndex() == 2)
            {
                ui->cbtn_setBWDot->setEnabled(true);
            }
        }
    }
}
void scanSettingsDialog::on_cbox_paperSize_currentIndexChanged(int index)
{
    if(index == 0)
    {
        ui->tbtn_sizeArea->setEnabled(false);
    }
    else
    {
        ui->tbtn_sizeArea->setEnabled(true);
    }
}
void scanSettingsDialog::on_cbox_scanPage_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0:
        ui->cbtn_backRotate_180->setEnabled(false);
        break;
    case 1:
    case 2:
    case 3:
        ui->cbtn_backRotate_180->setEnabled(true);
        break;
    case 4:
        ui->cbtn_backRotate_180->setEnabled(false);
        break;
    default:
        ui->cbtn_backRotate_180->setEnabled(true);
    }
}
void scanSettingsDialog::on_cbtn_deHole_stateChanged(int arg1)
{
    switch (arg1)
    {
    case 0:
        ui->label_deHole->setEnabled(false);
        ui->Slider_deHole->setEnabled(false);
        ui->label_deHolePara->setEnabled(false);
        break;
    case 1:
    case 2:
        ui->label_deHole->setEnabled(true);
        ui->Slider_deHole->setEnabled(true);
        ui->label_deHolePara->setEnabled(true);
        break;
    default:
        ui->label_deHole->setEnabled(false);
        ui->Slider_deHole->setEnabled(false);
        ui->label_deHolePara->setEnabled(false);
    }
}
void scanSettingsDialog::on_cbtn_sharAndBlur_stateChanged(int arg1)
{
    switch (arg1)
    {
    case 0:
        ui->rbtn_sharpening1->setEnabled(false);
        ui->rbtn_sharpening2->setEnabled(false);
        ui->rbtn_blur1->setEnabled(false);
        ui->rbtn_blur2->setEnabled(false);
        break;
    case 1:
    case 2:
        ui->rbtn_sharpening1->setEnabled(true);
        ui->rbtn_sharpening2->setEnabled(true);
        ui->rbtn_blur1->setEnabled(true);
        ui->rbtn_blur2->setEnabled(true);
        break;
    default:
        ui->rbtn_sharpening1->setEnabled(false);
        ui->rbtn_sharpening2->setEnabled(false);
        ui->rbtn_blur1->setEnabled(false);
        ui->rbtn_blur2->setEnabled(false);
    }
}
void scanSettingsDialog::on_rbtn_pageNum_toggled(bool checked)
{
    if(checked)
    {
        ui->spin_pageNum->setEnabled(true);
    }
    else
    {
        ui->spin_pageNum->setEnabled(false);
    }
}
void scanSettingsDialog::on_cbtn_skewCheck_stateChanged(int arg1)
{
    switch (arg1)
    {
    case 0:
        ui->label_skewCheck->setEnabled(false);
        ui->Slider_skewCheck->setEnabled(false);
        break;
    case 1:
    case 2:
        ui->label_skewCheck->setEnabled(true);
        ui->Slider_skewCheck->setEnabled(true);
        break;
    default:
        ui->label_skewCheck->setEnabled(false);
        ui->Slider_skewCheck->setEnabled(false);
    }
}
void scanSettingsDialog::on_cbox_pageDirection_currentIndexChanged(int index)
{
    if(index == 4)
    {
        ui->cbtn_backRotate_180->setCheckState(Qt::Unchecked);
        ui->cbtn_backRotate_180->setEnabled(false);
    }
    else if(ui->cbox_scanPage->currentIndex() != 0)
    {
        ui->cbtn_backRotate_180->setEnabled(true);
    }
}
void scanSettingsDialog::on_cbtn_jpgPercent_stateChanged(int arg1)
{
    switch (arg1)
    {
    case 0:
        ui->label_jpgPercent->setEnabled(false);
        ui->Slider_jpgPercent->setEnabled(false);
        ui->label_jpgPercentPara->setEnabled(false);
        break;
    case 1:
    case 2:
        ui->label_jpgPercent->setEnabled(true);
        ui->Slider_jpgPercent->setEnabled(true);
        ui->label_jpgPercentPara->setEnabled(true);
        break;
    default:
        ui->label_jpgPercent->setEnabled(false);
        ui->Slider_jpgPercent->setEnabled(false);
        ui->label_jpgPercentPara->setEnabled(false);
    }
}

//slider logic slots(9)
void scanSettingsDialog::on_Slider_brightness_valueChanged(int value)
{
    ui->spin_brightness->setValue(value);
}
void scanSettingsDialog::on_spin_brightness_valueChanged(int arg1)
{
    ui->Slider_brightness->setValue(arg1);
}
void scanSettingsDialog::on_Slider_contrast_valueChanged(int value)
{
    ui->spin_contrast->setValue(value);
}
void scanSettingsDialog::on_spin_contrast_valueChanged(int arg1)
{
    ui->Slider_contrast->setValue(arg1);
}
void scanSettingsDialog::on_Slider_gamma_valueChanged(int value)
{
    ui->dSpin_gamma->setValue(double(value)/10);
}
void scanSettingsDialog::on_dSpin_gamma_valueChanged(double arg1)
{
    ui->Slider_gamma->setValue(int(arg1*10));
}
void scanSettingsDialog::on_Slider_deHole_valueChanged(int value)
{
    QString per = "";
    switch(value)
    {
    case 1:
        per = "10%";
        break;
    case 2:
        per = "15%";
        break;
    case 3:
        per = "20%";
        break;
    case 4:
        per = "25%";
        break;
    case 5:
        per = "30%";
        break;
    case 6:
        per = "35%";
        break;
    case 7:
        per = "40%";
        break;
    case 8:
        per = "45%";
        break;
    case 9:
        per = "50%";
        break;
    default:
        per = "10%";
    }
    ui->label_deHolePara->setText(per);
}
void scanSettingsDialog::on_Slider_skewCheck_valueChanged(int value)
{
    QString sk = "";
    switch(value)
    {
    case 1:
        sk = QStringLiteral("很易检测");
        break;
    case 2:
        sk = QStringLiteral("易检测");
        break;
    case 3:
        sk = QStringLiteral("适中");
        break;
    case 4:
        sk = QStringLiteral("难检测");
        break;
    case 5:
        sk = QStringLiteral("很难检测");
        break;
    default:
        sk = QStringLiteral("适中");
    }
    ui->label_skewCheck->setText(sk);
}
void scanSettingsDialog::on_Slider_jpgPercent_valueChanged(int value)
{
    QString per = "";
    switch(value)
    {
    case 1:
        per = "10%";
        break;
    case 2:
        per = "20%";
        break;
    case 3:
        per = "30%";
        break;
    case 4:
        per = "40%";
        break;
    case 5:
        per = "50%";
        break;
    case 6:
        per = "60%";
        break;
    case 7:
        per = "70%";
        break;
    case 8:
        per = "80%";
        break;
    case 9:
        per = "90%";
        break;
    default:
        per = "100%";
    }
    ui->label_jpgPercentPara->setText(per);
}

//global btn slots(3)
void scanSettingsDialog::on_pbtn_default_clicked()
{
    set_defaults();
}
void scanSettingsDialog::on_pbtn_ok_clicked()
{
    close();
}
void scanSettingsDialog::on_pbtn_cancel_clicked()
{
    close();
}












