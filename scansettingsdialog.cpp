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
    ui->cbox_colorMode->setCurrentIndex(0);//������ɫ��ģʽ��24λ��ɫ
    ui->cbtn_multiStream->setCheckState(Qt::Unchecked);//�������������������ѡ
    ui->cbox_multiStream->setCurrentIndex(0);//�����������������ɫ+�Ҷ�+�ڰ�
    ui->cbox_multiStream->setEnabled(false);
    ui->cbox_paperSize->setCurrentIndex(1);//������ֽ�ųߴ磺A3
    ui->cbox_resolution->setCurrentIndex(2);//�������ֱ���DPI��200
    ui->cbox_scanPage->setCurrentIndex(1);//������ɨ���棺˫��

    ui->Slider_brightness->setValue(128);//���ȣ�128
    ui->spin_brightness->setValue(128);
    ui->Slider_contrast->setValue(4);//�Աȶȣ�4
    ui->spin_contrast->setValue(4);
    ui->Slider_gamma->setValue(10);//٤��ֵ��1.0
    ui->dSpin_gamma->setValue(1.0);


    ui->cbtn_deBlack->setCheckState(Qt::Unchecked);//����ͼ���������ڿ򣺲���ѡ
    ui->cbtn_adjust->setCheckState(Qt::Unchecked);//����ͼ�����Զ���ƫ������ѡ
    ui->cbtn_deMoire->setCheckState(Qt::Unchecked);//����ͼ����ȥ��Ħ���ƣ�����ѡ
    ui->cbtn_deHole->setCheckState(Qt::Unchecked);//����ͼ���������Ƴ�������ѡ
    ui->label_deHole->setEnabled(false);
    ui->Slider_deHole->setValue(1);
    ui->Slider_deHole->setEnabled(false);
    ui->label_deHolePara->setText("10%");
    ui->label_deHolePara->setEnabled(false);
    ui->cbox_deColor->setCurrentIndex(0);//�˾�����ɫ������ɫ
    ui->label_deColor->setEnabled(false);
    ui->cbox_deColor->setEnabled(false);
    ui->cbtn_setBWDot->setCheckState(Qt::Unchecked);//�˾���������ɢ������ѡ
    ui->cbtn_setBWDot->setEnabled(false);
    ui->cbtn_colorAdjust->setCheckState(Qt::Unchecked);//�˾���ɫ������������ѡ
    ui->cbtn_sharAndBlur->setCheckState(Qt::Unchecked);//�˾�������ģ��������ѡ
    ui->rbtn_sharpening1->setChecked(true);
    ui->rbtn_sharpening1->setEnabled(false);
    ui->rbtn_sharpening2->setEnabled(false);
    ui->rbtn_blur1->setEnabled(false);
    ui->rbtn_blur2->setEnabled(false);
    ui->cbtn_specialMulti->setCheckState(Qt::Unchecked);//����ͼ�����������������ѡ
    ui->cbtn_deRed_asheet->setCheckState(Qt::Unchecked);//����ͼ�������⿨���죺����ѡ

    ui->rbtn_maxPage->setChecked(true);//��ֽ������ɨ�裺ѡ��
    ui->rbtn_pageNum->setChecked(false);//��ֽ��ָ����������ѡ��
    ui->spin_pageNum->setValue(1);
    ui->spin_pageNum->setEnabled(false);
    ui->cbtn_doubleCheck->setCheckState(Qt::Unchecked);//��ֽ��˫�ż�⣺����ѡ
    ui->cbtn_skewCheck->setCheckState(Qt::Unchecked);//��ֽ����б��⣺����ѡ
    ui->Slider_skewCheck->setValue(3);
    ui->Slider_skewCheck->setEnabled(false);
    ui->label_skewCheck->setText(QStringLiteral("����"));
    ui->label_skewCheck->setEnabled(false);
    ui->cbtn_stapleCheck->setCheckState(Qt::Unchecked);//��ֽ�����鶤��⣺����ѡ
    ui->cbox_pageDirection->setCurrentIndex(0);//��ֽ���ĸ巽�򣺲���ת
    ui->cbtn_backRotate_180->setCheckState(Qt::Unchecked);//��ֽ��������ת180�㣺����ѡ

    ui->cbtn_imgSplit->setCheckState(Qt::Unchecked);//������ͼ���֣�����ѡ
    ui->cbtn_jpgPercent->setCheckState(Qt::Unchecked);//������JPGѹ���ȣ�����ѡ
    ui->Slider_jpgPercent->setValue(10);//������JPGѹ���ȣ�100%
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
        sk = QStringLiteral("���׼��");
        break;
    case 2:
        sk = QStringLiteral("�׼��");
        break;
    case 3:
        sk = QStringLiteral("����");
        break;
    case 4:
        sk = QStringLiteral("�Ѽ��");
        break;
    case 5:
        sk = QStringLiteral("���Ѽ��");
        break;
    default:
        sk = QStringLiteral("����");
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












