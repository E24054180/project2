#ifndef ARCHER_H
#define ARCHER_H

#include <QObject>
#include<QGraphicsPixmapItem>

class archer : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit archer(QObject *parent = 0);

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

#endif // ARCHER_H
