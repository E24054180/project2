#include "gamewindow.h"
#include "ui_gamewindow.h"
#include<QDebug>
gamewindow::gamewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gamewindow),
    game_scene(new QGraphicsScene(0, 0, 711, 851)),
    gametimer(new QTimer),
    endgame(new endwindow)

{
    ui->setupUi(this);
    ui->graphicsView->setScene(game_scene);

    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/gamemap.png").scaled(500,600));
    game_scene->addItem(game_item);
    game_item->setPos(100,100);

    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/white.png").scaled(90,25));
    game_scene->addItem(game_item);
    game_item->setPos(510,115);

    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/money.jpeg").scaled(50,50));
    game_scene->addItem(game_item);
    game_item->setPos(625,620);

    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/money.jpeg").scaled(50,50));
    game_scene->addItem(game_item);
    game_item->setPos(625,50);

    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/rocket.jpeg").scaled(100,100));
    game_scene->addItem(game_item);
    game_item->setPos(360,700);

    game_item = new QGraphicsPixmapItem(QPixmap(":/picture/李國君.jpg").scaled(80,80));
    game_scene->addItem(game_item);
    game_item->setPos(580,705);


    ui->building1_hp->setValue(100);
    ui->buliding2_hp->setValue(100);
    ui->ourtower_left->setValue(100);
    ui->ourtower_right->setValue(100);
    ui->enemytower_left->setValue(100);
    ui->enemytower_right->setValue(100);
    ui->killtime->display(0);


    game_item=NULL;
    gametimer->start(1000);
    connect(gametimer,SIGNAL(timeout()),this,SLOT(back_to_mainwindow()));
    connect(gametimer,SIGNAL(timeout()),this,SLOT(moneyadd()));


}


gamewindow::~gamewindow()
{
    delete ui;
    delete game_scene;
    delete game_item;
    delete gametimer;
    delete card1_item;
    delete card2_item;
    delete onehero;

}

void gamewindow::back_to_mainwindow()
{
     ui->lcdgametime->display(ui->lcdgametime->value()-1);

     if(ui->lcdgametime->value()==0)
     { 
        this->hide();
        this->judge();
     }

     else if(ui->enemytower_left->value()<=50)
     {
         game_item = new QGraphicsPixmapItem(QPixmap(":/picture/danger.jpeg").scaled(100,100));
         game_scene->addItem(game_item);
         game_item->setPos(100,200);
     }

}

void gamewindow::startgame()
{
        ui->lcdgametime->display(100);
}

void gamewindow::moneystart()
{
 int money;
 srand(time(NULL));
 money=(rand()%4)+4;
 ui->enemymoney->display(money);
 ui->ourmoney->display(money);
}

void gamewindow::moneyadd()
{
    ui->enemymoney->display(ui->enemymoney->value()+1);
    ui->ourmoney->display(ui->ourmoney->value()+1);
    if(ui->enemymoney->value()>10){
       ui->enemymoney->display(10);
    }
   if(ui->ourmoney->value()>10){
       ui->ourmoney->display(10);
   }
}

void gamewindow::setgiantcard1()
{
    if(card1number2==0){
    card1_item= new QGraphicsPixmapItem(QPixmap(":/picture/張名先.jpg").scaled(100,100));
    game_scene->addItem(card1_item);
    card1_item->setPos(100,700);
    card1number1=1;
    }
    else if(card1number2==1)
    {
        card1_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳中和.jpg").scaled(100,100));
        game_scene->addItem(card1_item);
        card1_item->setPos(100,700);
        card2number1=1;
    }

}

void gamewindow::setgiantcard2()
{
    if(card1number1==0)
    {
    card2_item= new QGraphicsPixmapItem(QPixmap(":/picture/張名先.jpg").scaled(100,100));
    game_scene->addItem(card2_item);
    card2_item->setPos(220,700);
    card1number2=1;
    }
    else if(card1number1==1)
    {
        card2_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳中和.jpg").scaled(100,100));
        game_scene->addItem(card2_item);
        card2_item->setPos(220,700);
        card2number2=1;

    }
}

void gamewindow::setarchercard1()
{
    if(card2number2==0)
    {
    card1_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳中和.jpg").scaled(100,100));
    game_scene->addItem(card1_item);
    card1_item->setPos(100,700);
    card2number1=1;
    }

    else if(card2number2==1)
    {
        card1_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳盈如.png").scaled(100,100));
        game_scene->addItem(card1_item);
        card1_item->setPos(100,700);
        card3number1=1;
    }
}

void gamewindow::setarchercard2()
{
    if(card2number1==0)
    {
    card2_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳中和.jpg").scaled(100,100));
    game_scene->addItem(card2_item);
    card2_item->setPos(220,700);
    card2number2=1;
    }

    else if(card2number1==1)
    {
        card2_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳盈如.png").scaled(100,100));
        game_scene->addItem(card2_item);
        card2_item->setPos(220,700);
        card3number2=1;
    }
}

void gamewindow::setwitchcard1()
{
    if(card3number2==0)
    {
    card1_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳盈如.png").scaled(100,100));
    game_scene->addItem(card1_item);
    card1_item->setPos(100,700);
    card3number1=1;
    }
    else if(card3number2==1)
    {
        card1_item  = new QGraphicsPixmapItem(QPixmap(":/picture/謝明得.jpg").scaled(100,100));
        game_scene->addItem(card1_item);
        card1_item->setPos(100,700);
        card4number1=1;
    }
}

void gamewindow::setwitchcard2()
{
    if(card3number1==0)
    {
    card2_item  = new QGraphicsPixmapItem(QPixmap(":/picture/陳盈如.png").scaled(100,100));
    game_scene->addItem(card2_item);
    card2_item->setPos(220,700);
    card3number2=1;
    }

    else if(card3number1==1)
    {
        card2_item  = new QGraphicsPixmapItem(QPixmap(":/picture/謝明得.jpg").scaled(100,100));
        game_scene->addItem(card2_item);
        card2_item->setPos(220,700);
        card4number2=1;
    }
}

void gamewindow::setprincecard1()
{
    if(card4number2==0)
    {
    card1_item  = new QGraphicsPixmapItem(QPixmap(":/picture/謝明得.jpg").scaled(100,100));
    game_scene->addItem(card1_item);
    card1_item->setPos(100,700);
    card4number1=1;
    }
    else if(card4number2==1)
    {
        card1_item= new QGraphicsPixmapItem(QPixmap(":/picture/張名先.jpg").scaled(100,100));
        game_scene->addItem(card1_item);
        card1_item->setPos(100,700);
        card1number1=1;
    }
}

void gamewindow::setprincecard2()
{
    if(card4number1==0)
    {
    card2_item  = new QGraphicsPixmapItem(QPixmap(":/picture/謝明得.jpg").scaled(100,100));
    game_scene->addItem(card2_item);
    card2_item->setPos(220,700);
    card4number2=1;
    }
    else if(card4number1==1)
    {
        card2_item= new QGraphicsPixmapItem(QPixmap(":/picture/張名先.jpg").scaled(100,100));
        game_scene->addItem(card2_item);
        card2_item->setPos(220,700);
        card1number2=1;
    }
}

void gamewindow::on_card1_button_clicked()
{

    if(card1number1==1&&ui->ourmoney->value()>=5)
    {
        giant *giant1 = new giant;
        giant1->setPixmap(QPixmap(":/picture/張名先.jpg").scaled(30, 30));
        giant1->setPos(215,520);
        giant1->connect(gametimer,SIGNAL(timeout()),giant1,SLOT(move()));
        giant1->connect(giant1,SIGNAL(attack()),this,SLOT(giantattack()));
        giant1->connect(giant1,SIGNAL(battle()),giant1,SLOT(attackbytower()));
        game_scene->addItem(static_cast<QGraphicsPixmapItem*>(giant1));
        ui->ourmoney->display(ui->ourmoney->value()-5);
        card1number1=0;
        delete card1_item;
        this->drawcard1();

    }
    else if(card2number1==1&&ui->ourmoney->value()>=3)
    {
        archer *archer1 = new archer;
        archer1->setPixmap(QPixmap(":/picture/陳中和.jpg").scaled(30, 30));
        archer1->setPos(215,520);
        archer1->connect(gametimer,SIGNAL(timeout()),archer1,SLOT(move()));
        archer1->connect(archer1,SIGNAL(attack()),this,SLOT(archerattack()));
        archer1->connect(archer1,SIGNAL(battle()),archer1,SLOT(attackbytower()));
        game_scene->addItem(static_cast<QGraphicsPixmapItem*>(archer1));
        ui->ourmoney->display(ui->ourmoney->value()-3);
        card2number1=0;
        delete card1_item;
        this->drawcard1();

    }
    else if(card3number1==1&&ui->ourmoney->value()>=5)
    {
    witch *witch1 = new witch;
    witch1->setPixmap(QPixmap(":/picture/陳盈如.png").scaled(30, 30));
    witch1->setPos(215,520);
    witch1->connect(gametimer,SIGNAL(timeout()),witch1,SLOT(move()));
    witch1->connect(witch1,SIGNAL(attack()),this,SLOT(witchattack()));
    witch1->connect(witch1,SIGNAL(battle()),witch1,SLOT(attackbytower()));
    game_scene->addItem(static_cast<QGraphicsPixmapItem*>(witch1));
    ui->ourmoney->display(ui->ourmoney->value()-5);
    card3number1=0;
    delete card1_item;
    this->drawcard1();

    }

    else if(card4number1==1&&ui->ourmoney->value()>=5)
       {
           prince *prince1 = new prince;
           prince1->setPixmap(QPixmap(":/picture/謝明得.jpg").scaled(30, 30));
           prince1->setPos(215,520);
           prince1->connect(gametimer,SIGNAL(timeout()),prince1,SLOT(move()));
           prince1->connect(prince1,SIGNAL(attack()),this,SLOT(princeattack()));
           prince1->connect(prince1,SIGNAL(battle()),prince1,SLOT(attackbytower()));
           game_scene->addItem(static_cast<QGraphicsPixmapItem*>(prince1));
           ui->ourmoney->display(ui->ourmoney->value()-4);
           card4number1=0;
           delete card1_item;
           this->drawcard1();

        }
}

void gamewindow::on_card2_button_clicked()
{
    if(card1number2==1&&ui->ourmoney->value()>=5)
    {
        giant *giant1 = new giant;
        giant1->setPixmap(QPixmap(":/picture/張名先.jpg").scaled(30, 30));
        giant1->setPos(215,520);
        giant1->connect(gametimer,SIGNAL(timeout()),giant1,SLOT(move()));
        giant1->connect(giant1,SIGNAL(attack()),this,SLOT(giantattack()));
        giant1->connect(giant1,SIGNAL(battle()),giant1,SLOT(attackbytower()));
        game_scene->addItem(static_cast<QGraphicsPixmapItem*>(giant1));
        ui->ourmoney->display(ui->ourmoney->value()-5);
        card1number2=0;
        delete card2_item;
        this->drawcard2();

    }
    else if(card2number2==1&&ui->ourmoney->value()>=3)
    {
        archer *archer1 = new archer;
        archer1->setPixmap(QPixmap(":/picture/陳中和.jpg").scaled(30, 30));
        archer1->setPos(215,520);
        archer1->connect(gametimer,SIGNAL(timeout()),archer1,SLOT(move()));
        archer1->connect(archer1,SIGNAL(attack()),this,SLOT(archerattack()));
        archer1->connect(archer1,SIGNAL(battle()),archer1,SLOT(attackbytower()));
        game_scene->addItem(static_cast<QGraphicsPixmapItem*>(archer1));
        ui->ourmoney->display(ui->ourmoney->value()-3);
        card2number2=0;
        delete card2_item;
        this->drawcard2();
    }
    else if(card3number2==1&&ui->ourmoney->value()>=5)
    {
    witch *witch1 = new witch;
    witch1->setPixmap(QPixmap(":/picture/陳盈如.png").scaled(30, 30));
    witch1->setPos(215,520);
    witch1->connect(gametimer,SIGNAL(timeout()),witch1,SLOT(move()));
    witch1->connect(witch1,SIGNAL(attack()),this,SLOT(witchattack()));
    witch1->connect(witch1,SIGNAL(battle()),witch1,SLOT(attackbytower()));
    game_scene->addItem(static_cast<QGraphicsPixmapItem*>(witch1));
    ui->ourmoney->display(ui->ourmoney->value()-5);
    card3number2=0;
    delete card2_item;
    this->drawcard2();

    }

    else if(card4number2==1&&ui->ourmoney->value()>=5)
       {
           prince *prince1 = new prince;
           prince1->setPixmap(QPixmap(":/picture/謝明得.jpg").scaled(30, 30));
           prince1->setPos(215,520);
           prince1->connect(gametimer,SIGNAL(timeout()),prince1,SLOT(move()));
           prince1->connect(prince1,SIGNAL(attack()),this,SLOT(princeattack()));
           prince1->connect(prince1,SIGNAL(battle()),prince1,SLOT(attackbytower()));
           game_scene->addItem(static_cast<QGraphicsPixmapItem*>(prince1));
           ui->ourmoney->display(ui->ourmoney->value()-4);
           card4number2=0;
           delete card2_item;
           this->drawcard2();

        }

}

void gamewindow::startminion()
{
    card1number1=0;
    card2number1=0;
    card3number1=0;
    card4number1=0;
}

void gamewindow::drawcard1()
{
    srand(time(NULL));
    drawnumber1=1+(rand()%4);
    if(drawnumber1==1)
    {
       this->setgiantcard1();
    }

    else if(drawnumber1==2)
    {
       this->setarchercard1();
    }

    else if(drawnumber1==3)
    {
       this->setwitchcard1();
    }

    else if(drawnumber1==4)
    {
       this->setprincecard1();
    }
}

void gamewindow::drawcard2()
{
    srand(time(NULL));
    drawnumber2=1+(rand()%4);

    if(drawnumber2==1)
    {
       this->setgiantcard2();
    }

    else if(drawnumber2==2)
    {
       this->setarchercard2();
    }

    else if(drawnumber2==3)
    {
       this->setwitchcard2();
    }

    else if(drawnumber2==4)
    {
       this->setprincecard2();
    }
}


void gamewindow::judge()
{
    if(ui->ourtower_left->value()>ui->enemytower_left->value()&&ui->lcdgametime->value()==0)
    {
        endgame->victory();
        endgame->show();
        endgame-> setWindowTitle(QObject::tr("result"));
        endgame->move(700, 400);
    }
    else if(ui->ourtower_left->value()<ui->enemytower_left->value()&&ui->lcdgametime->value()==0)
    {
        endgame->defeat();
        endgame->show();
        endgame-> setWindowTitle(QObject::tr("result"));
        endgame->move(700, 400);
    }

}

void gamewindow::giantattack()
{
    ui->enemytower_left->setValue(ui->enemytower_left->value()-1);
}

void gamewindow::archerattack()
{
    ui->enemytower_left->setValue(ui->enemytower_left->value()-2);
}

void gamewindow::witchattack()
{
    ui->enemytower_left->setValue(ui->enemytower_left->value()-3);
}

void gamewindow::princeattack()
{
     ui->enemytower_left->setValue(ui->enemytower_left->value()-3);
}


void gamewindow::towerattack()
{

}

void gamewindow::on_launch_clicked()
{
    if(ui->magic_time->value()==0&&ui->ourmoney->value()>=7)
    {
        magic *magic1 = new magic;
        magic1->setPixmap(QPixmap(":/picture/rocket.jpeg").scaled(80, 80));
        magic1->setPos(315,540);
        magic1->connect(gametimer,SIGNAL(timeout()),magic1,SLOT(move()));
        game_scene->addItem(static_cast<QGraphicsPixmapItem*>(magic1));
        ui->ourmoney->display(ui->ourmoney->value()-7);
        ui->magic_time->display(magiccount);
        this->connect(gametimer,SIGNAL(timeout()),this,SLOT(countdownmagic()));
        putmagic=putmagic+1;
        magiccount=30*putmagic;
        this->connect(magic1,SIGNAL(attack()),this,SLOT(magicattack()));
    }
}

void gamewindow::countdownmagic()
{


    if(ui->magic_time->value()==0)
    {

        ui->magic_time->display(0);

    }

    else if(ui->magic_time->value()>0)
    {
         ui->magic_time->display(ui->magic_time->value()-1);
    }
}

void gamewindow::magicattack()
{
    ui->buliding2_hp->setValue(ui->buliding2_hp->value()-5);

}

void gamewindow::on_hero_put_clicked()
{
    if(ui->lcdgametime->value()<=100&&heronumber==0&&ui->ourmoney->value()==10&&heronumber==0)
    {
        ui->ourmoney->display(0);
        heronumber = heronumber +1;


        onehero->setPixmap(QPixmap(":/picture/李國君.jpg").scaled(40, 40));
        onehero->setPos(320,550);
        game_scene->addItem(static_cast<QGraphicsPixmapItem*>(onehero));
        onehero->connect(gametimer,SIGNAL(timeout()),onehero,SLOT(attackbytower()));
        onehero->connect(gametimer,SIGNAL(timeout()),onehero,SLOT(attacktower()));
        onehero->connect(onehero,SIGNAL(attack1()),this,SLOT(heroattack1()));
        onehero->connect(onehero,SIGNAL(attack2()),this,SLOT(heroattack2()));
        onehero->connect(onehero,SIGNAL(dead()),this,SLOT(herodead()));
    }
}

void gamewindow::keyPressEvent(QKeyEvent *ee)
{



    if(heronumber==1)
    {

     if(onehero->x()<100||onehero->x()>580||onehero->y()<100||onehero->y()>680)
     {
           delete onehero;
           heronumber = -1;
        }
     else
     {
    switch(ee->key())
    {
    case Qt::Key_Up:
    case Qt::Key_W:
      onehero->setPos(onehero->x(),onehero->y() - 10);
       break;
    case Qt::Key_Down:
    case Qt::Key_S:
     onehero->setPos(onehero->x(), onehero->y() + 10);
       break;
    case Qt::Key_Left:
    case Qt::Key_A:
      onehero->setPos(onehero->x() - 10, onehero->y());
        break;
    case Qt::Key_Right:
    case Qt::Key_D:
      onehero->setPos(onehero->x() + 10,onehero-> y());
        break;
    }


    }

    }

}

void gamewindow::heroattack1()
{
       ui->enemytower_left->setValue(ui->enemytower_left->value()-4);
}

void gamewindow::heroattack2()
{
    ui->enemytower_right->setValue(ui->enemytower_right->value()-4);
}

void gamewindow::on_majorkill_clicked()
{
    if(heronumber==1&&ui->killtime->value()==0)
    {
        herokill *herokill1 = new herokill;
        herokill1->setPixmap(QPixmap(":/picture/kill.jpeg").scaled(30, 30));
        herokill1->setPos(onehero->x() + onehero->pixmap().width() / 2 - herokill1->pixmap().width() / 2, onehero->y() - herokill1->pixmap().height());
        game_scene->addItem(static_cast<QGraphicsPixmapItem*>(herokill1));
        herokill1->connect(gametimer, SIGNAL(timeout()), herokill1, SLOT(fly()));
        this->connect(herokill1,SIGNAL(bomb1()),this,SLOT(herobomb1()));
        this->connect(herokill1,SIGNAL(bomb2()),this,SLOT(herobomb2()));
        ui->killtime->display(herokillnumber);
        this->connect(gametimer,SIGNAL(timeout()),this,SLOT(countdownkill()));
        herokillput=herokillput+1;
        herokillnumber=30*herokillput;


      }
}

void gamewindow::herobomb1()
{
    ui->enemytower_left->setValue(ui->enemytower_left->value()-10);

}

void gamewindow::herobomb2()
{
    ui->enemytower_right->setValue(ui->enemytower_right->value()-10);
}


void gamewindow::countdownkill()
{


    if(ui->killtime->value()==0)
    {

        ui->killtime->display(0);

    }

    else if(ui->killtime->value()>0)
    {
         ui->killtime->display(ui->killtime->value()-1);
    }
}

void gamewindow::herodead()
{
    heronumber = -1;
}
