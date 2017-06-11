#include "endwindow.h"
#include "ui_endwindow.h"

endwindow::endwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::endwindow),
    end_scene(new QGraphicsScene(0, 0, 285, 175)),
    end_timer(new QTimer)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(end_scene);
    end_item = new QGraphicsPixmapItem(QPixmap(":/picture/defeat.jpeg").scaled(431,351));
}

endwindow::~endwindow()
{
    delete ui;
    delete end_scene;
    delete end_item;
    delete end_timer;
}

void endwindow::victory()
{

    end_item = new QGraphicsPixmapItem(QPixmap(":/picture/victory.jpeg").scaled(285,175));
    end_scene->addItem(end_item);
    end_item->setPos(0, 0);
}

void endwindow::defeat()
{
    end_item = new QGraphicsPixmapItem(QPixmap(":/picture/defeat.jpeg").scaled(285,175));
    end_scene->addItem(end_item);
    end_item->setPos(0, 0);
}















