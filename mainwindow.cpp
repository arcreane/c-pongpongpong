#include <QPixmap>
#include <QPushButton>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Création du pixmap pour l'image background
    QPixmap pix("C:/Users/paulb/Desktop/Projet/PONGPONGPONG/PongPongPong/images/pongbackground.jpg");

    //Set du pixmap dans le label, 100%*100%, en gardant le ratio
    ui->label_backgroundImg->setPixmap(pix.scaled(1000,1000, Qt::KeepAspectRatio));

    //Changement de la couleur du title
    ui->label_TitleGame->setStyleSheet("QLabel {color: white;}");

    btn_newGame->setStyleSheeet("background-color: white;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

