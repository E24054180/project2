#ifndef HEROKILL_H
#define HEROKILL_H

#include <QObject>
#include <QGraphicsPixmapItem>

class herokill : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit herokill(QObject *parent = 0);

signals:
    void bomb1();
    void bomb2();
public slots:
    void fly();

};

#endif // HEROKILL_H
