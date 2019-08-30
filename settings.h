#ifndef SETTINGS_H
#define SETTINGS_H

#include "mainwindow.h"


class settings:public MainWindow
{
public:
    settings();
    ~settings();
    void set_globalLogic();
    void set_default();
};

#endif // SETTINGS_H
