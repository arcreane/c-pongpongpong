#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Pong.h"

class Pong : public QMainWindow
{
    Q_OBJECT

public:
    Pong(QWidget *parent = Q_NULLPTR);

private:
    Ui::Pong ui;
};
