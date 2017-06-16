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
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/張名先.jpg").scaled(130,130));
    card_scene->addItem(card_item);
    card_item->setPos(100,215);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/陳中和.jpg").scaled(130,130));
    card_scene->addItem(card_item);
    card_item->setPos(300,215);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/陳盈如.png").scaled(130,130));
    card_scene->addItem(card_item);
    card_item->setPos(500,215);
    card_item= new QGraphicsPixmapItem(QPixmap(":/picture/謝明得.jpg").scaled(130,130));
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

void otherwindow::showthewindow()
{
    this->show();
}

void otherwindow::on_card1_clicked()
{
    selectnumber0=selectnumber0+1;
    if(selectnumber0==1)
    {
       w3->setgiantcard1();
    }

    else if(selectnumber0==2)
    {
        this->hide();
        w3->show();
        w3-> setWindowTitle(QObject::tr("gamewindow"));
        w3->move(600, 100);
        w3->startgame();
        w3->moneystart();
        w3->setgiantcard2();
    }
}

void otherwindow::on_card2_clicked()
{
    selectnumber0=selectnumber0+1;

    if(selectnumber0==1)
    {
       w3->setarchercard1();
    }


    else if(selectnumber0==2)
    {
        this->hide();
        w3->show();
        w3-> setWindowTitle(QObject::tr("gamewindow"));
        w3->move(600, 100);
        w3->startgame();
        w3->moneystart();
        w3->setarchercard2();
    }
}

void otherwindow::on_card3_clicked()
{
    selectnumber0=selectnumber0+1;

    if(selectnumber0==1)
    {
       w3->setwitchcard1();
    }

    else if(selectnumber0==2)
    {
        this->hide();
        w3->show();
        w3-> setWindowTitle(QObject::tr("gamewindow"));
        w3->move(600, 100);
        w3->startgame();
        w3->moneystart();
        w3->setwitchcard2();
    }
}

void otherwindow::on_card4_clicked()
{
    selectnumber0=selectnumber0+1;

    if(selectnumber0==1)
    {
       w3->setprincecard1();
    }

    else if(selectnumber0==2)
    {
        this->hide();
        w3->show();
        w3-> setWindowTitle(QObject::tr("gamewindow"));
        w3->move(600, 100);
        w3->startgame();
        w3->moneystart();
        w3->setprincecard2();
    }
}

void otherwindow::startselectnumber()
{
    selectnumber0=0;
}































