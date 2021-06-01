#include "Pong.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pong w;
    w.show();
    return a.exec();
}
