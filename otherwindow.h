#ifndef OTHERWINDOW_H
#define OTHERWINDOW_H

#include <QMainWindow>
#include <QObject>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include<QKeyEvent>
#include<QMouseEvent>
#include"gamewindow.h"
#include<stdio.h>
#include<stdlib.h>
namespace Ui {
class otherwindow;
}

class otherwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit otherwindow(QWidget *parent = 0);
    ~otherwindow();

signals:




public slots:
    void showthewindow();

    void on_card1_clicked();

    void on_card2_clicked();

    void on_card3_clicked();

    void on_card4_clicked();


public:

    void startselectnumber();

private:
    Ui::otherwindow *ui;
    QGraphicsScene *card_scene;
    QGraphicsItem *card_item;
    QTimer *cardtimer;
    gamewindow *w3;
    int selectnumber0;

};

#endif // OTHERWINDOW_H
