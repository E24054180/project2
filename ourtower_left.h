#ifndef OURTOWER_H
#define OURTOWER_H

#include <QObject>

class ourtower_left : public QObject
{
    Q_OBJECT
public:
    explicit ourtower_left(QObject *parent = 0);

signals:

public slots:
    void attackbygiant();
    void attackbyarcher();
    void attackbywitch();
    void attackbyprince();

private:
    int hp = 30000;


};

#endif // OURTOWER_H
