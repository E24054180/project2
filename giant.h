#ifndef GIANT_H
#define GIANT_H

#include <QObject>
#include <QGraphicsPixmapItem>

class giant : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit giant(QObject *parent = 0);

signals:
    void attack();
    void battle();
    void dead();
public slots:
    void move();
    void attackbytower();
    void attacktower();

private:
    int hp = 6000;


};

#endif // GIANT_H
