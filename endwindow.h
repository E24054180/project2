#ifndef ENDWINDOW_H
#define ENDWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include<QKeyEvent>
#include<QMouseEvent>

namespace Ui {
class endwindow;
}

class endwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit endwindow(QWidget *parent = 0);
    ~endwindow();

public slots:
    void victory();
    void defeat();

private:
    Ui::endwindow *ui;
    QGraphicsScene *end_scene;
    QGraphicsItem *end_item;
    QTimer *end_timer;

};

#endif // ENDWINDOW_H
