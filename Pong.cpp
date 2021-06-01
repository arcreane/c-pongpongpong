#include "Pong.h"
#include <QPixmap>
#include <QPushButton>
#include "ui_pong.h"

Pong::Pong(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    /*
    //Création du pixmap pour l'image background
    //QPixmap pix("C:/Users/paulb/Desktop/Projet/PONGPONGPONG/PongPongPong/images/pongbackground.jpg");

    //Set du pixmap dans le label, 100%*100%, en gardant le ratio
    //ui.label_backgroundImg->setPixmap(pix.scaled(1000, 1000, Qt::KeepAspectRatio));

    //Changement de la couleur du title
    ui.label_TitleGame->setStyleSheet("QLabel {color: white;}");

    //Bloquer resize de la windows
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

    //btn_quit.setStyleSheet("background-color: black;");

    //btn_newGame->setStyleSheeet("background-color: white;");*/

}


