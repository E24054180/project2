#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include<QKeyEvent>
#include<QMouseEvent>



namespace Ui {
class gamewindow;
}

class gamewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = 0);
    ~gamewindow();

signals:
    void reopenMainwindow();

public slots:
    void back_to_mainwindow();
    void startgame();
    void setgiant();

private:
    Ui::gamewindow *ui;
    QGraphicsScene *game_scene;
    QGraphicsItem *game_item;
    QTimer *gametimer;
};

#endif // GAMEWINDOW_H
