#ifndef SETACCOUNTWINDOW_H
#define SETACCOUNTWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QLabel>
#include <QMessageBox>
#include <QCoreApplication>
#include <QFile>
#include <QtDebug>
#include"otherwindow.h"
#include<QTextStream>
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>


namespace Ui {
class setaccountwindow;
}

class setaccountwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit setaccountwindow(QWidget *parent = 0);
    ~setaccountwindow();
    void settingaccount(int x_start , int y_end);


private slots:
    void on_pushButton_clicked();

private:
    Ui::setaccountwindow *ui;
    otherwindow *w2;
    std::string line1;
    std::string line2;
};

#endif // SETACCOUNTWINDOW_H
