#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include<QKeyEvent>
#include<QMouseEvent>
#include<time.h>
#include<stdio.h>
#include"giant.h"
#include"archer.h"
#include"witch.h"
#include"prince.h"
#include"endwindow.h"
#include"magic.h"
#include"hero.h"
#include <QKeyEvent>


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
    void draw();


public slots:
    void back_to_mainwindow();
    void startgame();
    void moneystart();
    void setgiantcard1();
    void moneyadd();
    void setarchercard1();
    void setwitchcard1();
    void setprincecard1();
    void startminion();
    void drawcard1();
    void setgiantcard2();
    void setarchercard2();
    void setwitchcard2();
    void setprincecard2();
    void drawcard2();
    void judge();
    void giantattack();
    void towerattack();
    void countdownmagic();
    void magicattack();
    void archerattack();
    void witchattack();
    void princeattack();
    virtual void keyPressEvent(QKeyEvent *ee);

private slots:
    void on_card1_button_clicked();

    void on_card2_button_clicked();


    void on_launch_clicked();

    void on_hero_put_clicked();

private:
    Ui::gamewindow *ui;
    QGraphicsScene *game_scene;
    QGraphicsItem *game_item;
    QTimer *gametimer;
    QGraphicsItem *card1_item;
    QGraphicsItem *card2_item;  
    int card1number1,card2number1,card3number1,card4number1;
    int card1number2,card2number2,card3number2,card4number2;
    int drawnumber1,drawnumber2;
    endwindow *endgame;
    int  putmagic = 1;
    int magiccount = 30;
    int heronumber = 0;
    hero *onehero = new hero;

};

#endif // GAMEWINDOW_H
