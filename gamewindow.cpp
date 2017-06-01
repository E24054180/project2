#include "gamewindow.h"
#include "ui_gamewindow.h"

gamewindow::gamewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gamewindow),
    game_scene(new QGraphicsScene(0, 0, 1031, 781)),
    gametimer(new QTimer)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(game_scene);
    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/building1.jpeg").scaled(100,100));
    game_scene->addItem(game_item);
    game_item->setPos(350,50);
    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/building2.jpg").scaled(100,100));
    game_scene->addItem(game_item);
    game_item->setPos(350,550);
    ui->building1_hp->setValue(100);
    ui->buliding2_hp->setValue(100);

    gametimer->start(1000);
    connect(gametimer,SIGNAL(timeout()),this,SLOT(back_to_mainwindow()));
}

gamewindow::~gamewindow()
{
    delete ui;
    delete game_scene;
    delete game_item;
    delete gametimer;
}

void gamewindow::back_to_mainwindow()
{
     ui->lcdgametime->display(ui->lcdgametime->value()-1);

     if(ui->lcdgametime->value()==0)
     {
        ui->lcdgametime->display(10);
        emit reopenMainwindow();

     }

}

void gamewindow::startgame()
{
    ui->lcdgametime->display(10);
}

void gamewindow::setgiant()
{
    game_item  = new QGraphicsPixmapItem(QPixmap(":/picture/giant.jpeg").scaled(50,50));
    game_scene->addItem(game_item);
    game_item->setPos(100,600);
}









