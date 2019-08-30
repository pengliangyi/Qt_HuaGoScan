#ifndef SCANSETTINGSDIALOG_H
#define SCANSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class scanSettingsDialog;
}

class scanSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit scanSettingsDialog(QWidget *parent = nullptr);
    ~scanSettingsDialog();
private slots:
    void on_pbtn_default_clicked();

    void on_cbox_colorMode_currentIndexChanged(int index);
    void on_cbox_scanPage_currentIndexChanged(int index);
    void on_cbtn_deHole_stateChanged(int arg1);
    void on_rbtn_pageNum_toggled(bool checked);
    void on_cbtn_skewCheck_stateChanged(int arg1);

    void on_Slider_brightness_valueChanged(int value);
    void on_spin_brightness_valueChanged(int arg1);
    void on_Slider_contrast_valueChanged(int value);
    void on_spin_contrast_valueChanged(int arg1);
    void on_Slider_gamma_valueChanged(int value);
    void on_dSpin_gamma_valueChanged(double arg1);
    void on_Slider_deHole_valueChanged(int value);
    void on_Slider_skewCheck_valueChanged(int value);

    void on_pbtn_ok_clicked();
    void on_pbtn_cancel_clicked();

    void on_cbox_pageDirection_currentIndexChanged(int index);
    void on_cbtn_multiStream_stateChanged(int arg1);
    void on_cbox_paperSize_currentIndexChanged(int index);
    void on_cbtn_sharAndBlur_stateChanged(int arg1);
    void on_cbtn_jpgPercent_stateChanged(int arg1);
    void on_Slider_jpgPercent_valueChanged(int value);

private:
    Ui::scanSettingsDialog *ui;

    void set_globalLogic();
    void set_defaults();
};

#endif // SCANSETTINGSDIALOG_H
