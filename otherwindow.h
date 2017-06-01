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


private slots:
    void on_card1_clicked();

    void on_start_clicked();

private:
    Ui::otherwindow *ui;
    QGraphicsScene *card_scene;
    QGraphicsItem *card_item;
    QTimer *cardtimer;
    gamewindow *w3;
};

#endif // OTHERWINDOW_H
