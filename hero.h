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


public slots:
    void dead();


};

#endif // HERO_H
