#include "mainwindow.h"
#include <QApplication>
#include<QObject>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle(QObject::tr("menuwindow"));
    w.move(300, 100);














    return a.exec();
}
