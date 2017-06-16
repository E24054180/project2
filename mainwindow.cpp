#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    menu_scene(new QGraphicsScene(0, 0, 1131, 671)),
    timer(new QTimer),
    account(new setaccountwindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(menu_scene);
    active_item= new QGraphicsPixmapItem(QPixmap(":/picture/sd4_small.jpg").scaled(1131,671));
    menu_scene->addItem(active_item);
    active_item->setPos(0, 0);
    active_item= new QGraphicsPixmapItem(QPixmap(":/picture/startgame.jpeg").scaled(300,150));
    menu_scene->addItem(active_item);
    active_item->setPos(100, 200);

    active_item = NULL;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete menu_scene;
    delete active_item;
    delete timer;
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{

     if(e->x()<410&&e->x()>90&&e->y()<360&&e->y()>190)
     {
         this->hide();
         account->show();
         account-> setWindowTitle(QObject::tr("Sign In"));
         account-> move(600, 100);
    }
}

void MainWindow::showThisWindow()
{
    this->show();
}













