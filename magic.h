#ifndef MAGIC_H
#define MAGIC_H

#include <QObject>
#include <QGraphicsPixmapItem>

class magic : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit magic(QObject *parent = 0);

signals:
    void attack();

public slots:
    void move();
};

#endif // MAGIC_H
