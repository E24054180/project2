#ifndef COLLECTWINDOW_H
#define COLLECTWINDOW_H

#include <QMainWindow>
#include <QObject>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include<QKeyEvent>
#include<QMouseEvent>


namespace Ui {
class collectwindow;
}

class collectwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit collectwindow(QWidget *parent = 0);
    ~collectwindow();


private:
    Ui::collectwindow *ui;

};

#endif // COLLECTWINDOW_H
