#ifndef CARDWINDOW_H
#define CARDWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include<QKeyEvent>
#include<QMouseEvent>


namespace Ui {
class Cardwindow;
}

class Cardwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cardwindow(QWidget *parent = 0);
    ~Cardwindow();

signals:

public slots:


private:
    Ui::Cardwindow *ui;
    QGraphicsScene *card_scene;
    QGraphicsItem *card_item;
    QTimer *timer;

};

#endif // CARDWINDOW_H
