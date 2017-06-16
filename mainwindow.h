#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include<QKeyEvent>
#include<QMouseEvent>
#include"setaccountwindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:

public slots:
    virtual void mousePressEvent(QMouseEvent *e);
    void showThisWindow();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *menu_scene;
    QGraphicsItem *active_item;
    QTimer *timer;
    setaccountwindow *account;


};

#endif // MAINWINDOW_H
