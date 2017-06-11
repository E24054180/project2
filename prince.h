#ifndef PRINCE_H
#define PRINCE_H

#include <QObject>

#include<QGraphicsPixmapItem>

class prince : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit prince(QObject *parent = 0);

signals:
    void attack();
    void battle();
    void dead();

public slots:
    void move();
    void attackbytower();

private:
    int hp = 3000;
};

#endif // PRINCE_H
