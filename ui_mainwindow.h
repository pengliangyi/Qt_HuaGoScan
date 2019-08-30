/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_windowTitle;
    QSpacerItem *horizontalSpacer;
    QToolButton *win_btn_about;
    QToolButton *win_btn_help;
    QToolButton *win_btn_min;
    QToolButton *win_btn_max;
    QToolButton *win_btn_close;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btn_scan;
    QToolButton *btn_scanSettings;
    QFrame *line;
    QToolButton *btn_open;
    QToolButton *btn_close;
    QToolButton *btn_save;
    QToolButton *btn_saveAs;
    QToolButton *btn_delete;
    QFrame *line_2;
    QToolButton *btn_zoomIn;
    QToolButton *btn_zoomOut;
    QToolButton *btn_zoomReal;
    QToolButton *btn_zoomFit;
    QToolButton *btn_antiClock;
    QToolButton *btn_clock;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_4;
    QListView *listView;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLabel *lab_imgSize;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QLabel *lab_imgFormat;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QLabel *lab_imgData;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lab_statusImg;
    QLabel *lab_status;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *progressBar;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(758, 529);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #1260B2, stop: 0.3 #1260B2, stop: 0.6 #174894, stop: 1.0 #232A72);}"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 10, 0);
        lbl_windowTitle = new QLabel(widget);
        lbl_windowTitle->setObjectName(QString::fromUtf8("lbl_windowTitle"));

        horizontalLayout_2->addWidget(lbl_windowTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        win_btn_about = new QToolButton(widget);
        win_btn_about->setObjectName(QString::fromUtf8("win_btn_about"));
        win_btn_about->setStyleSheet(QString::fromUtf8("QToolButton:!hover{border-image: url(:/new/image/images/title/win_home.PNG)}\n"
"QToolButton:hover{ border-image: url(:/new/image/images/title/win_home_hover.PNG)}\n"
"QToolButton:pressed{ border-image: url(:/new/image/images/title/win_home_press.PNG);}"));
        win_btn_about->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(win_btn_about);

        win_btn_help = new QToolButton(widget);
        win_btn_help->setObjectName(QString::fromUtf8("win_btn_help"));
        win_btn_help->setStyleSheet(QString::fromUtf8("QToolButton:!hover{border-image: url(:/new/image/images/title/win_help.PNG)}\n"
"QToolButton:hover{ border-image: url(:/new/image/images/title/win_help_hover.PNG)}\n"
"QToolButton:pressed{ border-image: url(:/new/image/images/title/win_help_press.PNG)}"));

        horizontalLayout_2->addWidget(win_btn_help);

        win_btn_min = new QToolButton(widget);
        win_btn_min->setObjectName(QString::fromUtf8("win_btn_min"));
        win_btn_min->setStyleSheet(QString::fromUtf8("QToolButton:!hover{border-image: url(:/new/image/images/title/win_min.PNG)}\n"
"QToolButton:hover{ border-image: url(:/new/image/images/title/win_min_hover.PNG)}\n"
"QToolButton:pressed{ border-image: url(:/new/image/images/title/win_min_press.PNG)}"));

        horizontalLayout_2->addWidget(win_btn_min);

        win_btn_max = new QToolButton(widget);
        win_btn_max->setObjectName(QString::fromUtf8("win_btn_max"));
        win_btn_max->setStyleSheet(QString::fromUtf8("QToolButton:!hover{border-image: url(:/new/image/images/title/win_max.PNG)}\n"
"QToolButton:hover{ border-image: url(:/new/image/images/title/win_max_hover.PNG)}\n"
"QToolButton:pressed{ border-image: url(:/new/image/images/title/win_max_press.PNG)}"));

        horizontalLayout_2->addWidget(win_btn_max);

        win_btn_close = new QToolButton(widget);
        win_btn_close->setObjectName(QString::fromUtf8("win_btn_close"));
        win_btn_close->setStyleSheet(QString::fromUtf8("QToolButton:!hover{border-image: url(:/new/image/images/title/win_exit.PNG)}\n"
"QToolButton:hover{ border-image: url(:/new/image/images/title/win_exit_hover.PNG)}\n"
"QToolButton:pressed{ border-image: url(:/new/image/images/title/win_exit_press.PNG)}"));

        horizontalLayout_2->addWidget(win_btn_close);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(MainWindow);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setAutoFillBackground(false);
        widget_4->setStyleSheet(QString::fromUtf8("/*QWidget { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff330d, stop: 1 #ff0d00);border: none; }*/"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_scan = new QToolButton(widget_4);
        btn_scan->setObjectName(QString::fromUtf8("btn_scan"));
        btn_scan->setEnabled(true);
        btn_scan->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/image/images/scan.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_scan->setIcon(icon);
        btn_scan->setIconSize(QSize(40, 40));
        btn_scan->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_scan);

        btn_scanSettings = new QToolButton(widget_4);
        btn_scanSettings->setObjectName(QString::fromUtf8("btn_scanSettings"));
        btn_scanSettings->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/image/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_scanSettings->setIcon(icon1);
        btn_scanSettings->setIconSize(QSize(40, 40));
        btn_scanSettings->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_scanSettings);

        line = new QFrame(widget_4);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        btn_open = new QToolButton(widget_4);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));
        btn_open->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/image/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_open->setIcon(icon2);
        btn_open->setIconSize(QSize(40, 40));
        btn_open->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_open);

        btn_close = new QToolButton(widget_4);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/image/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close->setIcon(icon3);
        btn_close->setIconSize(QSize(40, 40));
        btn_close->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_close);

        btn_save = new QToolButton(widget_4);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/image/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_save->setIcon(icon4);
        btn_save->setIconSize(QSize(40, 40));
        btn_save->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_save);

        btn_saveAs = new QToolButton(widget_4);
        btn_saveAs->setObjectName(QString::fromUtf8("btn_saveAs"));
        btn_saveAs->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/image/images/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_saveAs->setIcon(icon5);
        btn_saveAs->setIconSize(QSize(40, 40));
        btn_saveAs->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_saveAs);

        btn_delete = new QToolButton(widget_4);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/image/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete->setIcon(icon6);
        btn_delete->setIconSize(QSize(40, 40));
        btn_delete->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_delete);

        line_2 = new QFrame(widget_4);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        btn_zoomIn = new QToolButton(widget_4);
        btn_zoomIn->setObjectName(QString::fromUtf8("btn_zoomIn"));
        btn_zoomIn->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/image/images/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_zoomIn->setIcon(icon7);
        btn_zoomIn->setIconSize(QSize(40, 40));
        btn_zoomIn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_zoomIn);

        btn_zoomOut = new QToolButton(widget_4);
        btn_zoomOut->setObjectName(QString::fromUtf8("btn_zoomOut"));
        btn_zoomOut->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/image/images/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_zoomOut->setIcon(icon8);
        btn_zoomOut->setIconSize(QSize(40, 40));
        btn_zoomOut->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_zoomOut);

        btn_zoomReal = new QToolButton(widget_4);
        btn_zoomReal->setObjectName(QString::fromUtf8("btn_zoomReal"));
        btn_zoomReal->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/image/images/restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_zoomReal->setIcon(icon9);
        btn_zoomReal->setIconSize(QSize(40, 40));
        btn_zoomReal->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_zoomReal);

        btn_zoomFit = new QToolButton(widget_4);
        btn_zoomFit->setObjectName(QString::fromUtf8("btn_zoomFit"));
        btn_zoomFit->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/image/images/fit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_zoomFit->setIcon(icon10);
        btn_zoomFit->setIconSize(QSize(40, 40));
        btn_zoomFit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_zoomFit);

        btn_antiClock = new QToolButton(widget_4);
        btn_antiClock->setObjectName(QString::fromUtf8("btn_antiClock"));
        btn_antiClock->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/image/images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_antiClock->setIcon(icon11);
        btn_antiClock->setIconSize(QSize(40, 40));
        btn_antiClock->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_antiClock);

        btn_clock = new QToolButton(widget_4);
        btn_clock->setObjectName(QString::fromUtf8("btn_clock"));
        btn_clock->setStyleSheet(QString::fromUtf8("QToolButton:!hover  { background-color: transparent; border: none;}\n"
"QToolButton:hover   { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #EAF4F6, stop: 0.5 #1260b2, stop: 1 #EAF4F6);border: 1px solid #C2F0FF; border-radius: 4px; }\n"
"QToolButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, x3: 0, y3: 2, stop: 0 #1260b2, stop: 0.5 #EAF4F6, stop: 1 #1260b2);border: 1px solid #BFDFBF; border-radius: 4px; }\n"
"QToolButton:disabled{ background-color: transparent; color: #808080; border: none; }"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/image/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clock->setIcon(icon12);
        btn_clock->setIconSize(QSize(40, 40));
        btn_clock->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btn_clock);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        graphicsView = new QGraphicsView(MainWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listView = new QListView(MainWindow);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(listView);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(MainWindow);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_17->addWidget(label_15);

        lab_imgSize = new QLabel(MainWindow);
        lab_imgSize->setObjectName(QString::fromUtf8("lab_imgSize"));

        horizontalLayout_17->addWidget(lab_imgSize);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(MainWindow);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_16->addWidget(label_13);

        lab_imgFormat = new QLabel(MainWindow);
        lab_imgFormat->setObjectName(QString::fromUtf8("lab_imgFormat"));

        horizontalLayout_16->addWidget(lab_imgFormat);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_11 = new QLabel(MainWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_15->addWidget(label_11);

        lab_imgData = new QLabel(MainWindow);
        lab_imgData->setObjectName(QString::fromUtf8("lab_imgData"));

        horizontalLayout_15->addWidget(lab_imgData);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_15);


        verticalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4->setStretch(0, 1);

        horizontalLayout->addLayout(verticalLayout_4);

        horizontalLayout->setStretch(0, 5);

        verticalLayout->addLayout(horizontalLayout);

        widget_3 = new QWidget(MainWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(0,115,187), stop: 0.2 rgb(27,132,187), stop: 0.3 rgb(0,124,198), stop: 1.0 rgb(4,87,153));border: 1px solid rgb(0,115,187);}"));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 0, 20, 0);
        lab_statusImg = new QLabel(widget_3);
        lab_statusImg->setObjectName(QString::fromUtf8("lab_statusImg"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(20);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(lab_statusImg->sizePolicy().hasHeightForWidth());
        lab_statusImg->setSizePolicy(sizePolicy1);
        lab_statusImg->setPixmap(QPixmap(QString::fromUtf8(":/new/image/images/disconnect.png")));

        horizontalLayout_5->addWidget(lab_statusImg);

        lab_status = new QLabel(widget_3);
        lab_status->setObjectName(QString::fromUtf8("lab_status"));

        horizontalLayout_5->addWidget(lab_status);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        progressBar = new QProgressBar(widget_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(200);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{ border: 2px solid #656565; border-radius: 5px; text-align: center; }\n"
"QProgressBar::chunk{ background-color: #05B8CC; width: 10px; margin: 0.5px; }"));
        progressBar->setValue(0);

        horizontalLayout_5->addWidget(progressBar);


        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(2, 1);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl_windowTitle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:xx-large; font-weight:600; color:#ffffff;\">HuaGoScan Scanner V1.0</span></p></body></html>", nullptr));
        win_btn_about->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        win_btn_help->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        win_btn_min->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        win_btn_max->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        win_btn_close->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btn_scan->setText(QCoreApplication::translate("MainWindow", "\346\211\253\346\217\217", nullptr));
        btn_scanSettings->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        btn_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btn_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        btn_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        btn_saveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_zoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        btn_zoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        btn_zoomReal->setText(QCoreApplication::translate("MainWindow", "\350\277\230\345\216\237", nullptr));
        btn_zoomFit->setText(QCoreApplication::translate("MainWindow", "\351\200\202\344\270\255", nullptr));
        btn_antiClock->setText(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\254", nullptr));
        btn_clock->setText(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\254", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<font color=black><b>\345\260\272\345\257\270:</b></font>", nullptr));
        lab_imgSize->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "<font color=black><b>\347\261\273\345\236\213:</b></font>", nullptr));
        lab_imgFormat->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "<font color=black><b>\345\244\247\345\260\217:</b></font>", nullptr));
        lab_imgData->setText(QString());
        lab_statusImg->setText(QString());
        lab_status->setText(QCoreApplication::translate("MainWindow", "<font color=white><b>\346\234\252\350\277\236\346\216\245\345\210\260\346\211\253\346\217\217\350\256\276\345\244\207</b></font>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
