#ifndef ENEMYTOWER_H
#define ENEMYTOWER_H

#include <QObject>

class enemytower_left : public QObject
{
    Q_OBJECT
public:
    explicit enemytower_left(QObject *parent = 0);

signals:

public slots:
    void attackbygiant();
    void attackbyarcher();
    void attackbywitch();
    void attackbyprince();

private:
    int hp = 30000;


};

#endif // ENEMYTOWER_H
