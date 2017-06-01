#include "otherwindow.h"
#include "ui_otherwindow.h"

otherwindow::otherwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::otherwindow),
    card_scene(new QGraphicsScene(0, 0, 1141, 731)),
    cardtimer(new QTimer),
    w3(new gamewindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(card_scene);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/background.jpg").scaled(1141,731));
    card_scene->addItem(card_item);
    card_item->setPos(0,0);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/giant.jpeg").scaled(130,130));
    card_scene->addItem(card_item);
    card_item->setPos(100,215);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/archer.jpeg").scaled(130,130));
    card_scene->addItem(card_item);
    card_item->setPos(300,215);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/witch.jpg").scaled(130,130));
    card_scene->addItem(card_item);
    card_item->setPos(500,215);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/prince.jpg").scaled(130,130));
    card_scene->addItem(card_item);
    card_item->setPos(700,215);
    card_item = NULL;



}

otherwindow::~otherwindow()
{
    delete ui;
    delete card_scene;
    delete card_item;
    delete cardtimer;
}

void otherwindow::on_start_clicked()
{
    w3->show();
    this->hide();
    w3->startgame();
}

void otherwindow::showthewindow()
{
    this->show();
}


void otherwindow::on_card1_clicked()
{
    w3->setgiant();
}
