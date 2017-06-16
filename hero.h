#ifndef HERO_H
#define HERO_H

#include <QObject>
#include <QGraphicsPixmapItem>


class hero : public QObject,public QGraphicsPixmapItem

{
    Q_OBJECT
public:
    explicit hero(QObject *parent = 0);

signals:
    void attack1();
    void attack2();
    void dead();
public slots:

    void attackbytower();
    void attacktower();

private:
    int hp = 2000;

};

#endif // HERO_H
