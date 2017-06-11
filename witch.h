#ifndef WITCH_H
#define WITCH_H

#include <QObject>
#
#include<QGraphicsPixmapItem>

class witch : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit witch(QObject *parent = 0);

signals:
    void attack();
    void battle();
    void dead();
public slots:
    void move();
    void attackbytower();

private:
    int hp = 2000;
};

#endif // WITCH_H
