#include "cardwindow.h"
#include "ui_cardwindow.h"

Cardwindow::Cardwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cardwindow),
    card_scene(new QGraphicsScene(0, 0, 1141, 691)),
    timer(new QTimer)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(card_scene);
}

Cardwindow::~Cardwindow()
{
    delete ui;
}
