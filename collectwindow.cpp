#include "collectwindow.h"
#include "ui_collectwindow.h"

collectwindow::collectwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::collectwindow)
{
    ui->setupUi(this);
    

}

collectwindow::~collectwindow()
{
    delete ui;
}
