#ifndef ENEMYTOWER_H
#define ENEMYTOWER_H

#include <QObject>

class enemytower : public QObject
{
    Q_OBJECT
public:
    explicit enemytower(QObject *parent = 0);

signals:

public slots:


private:
    int hp = 30000;


};

#endif // ENEMYTOWER_H
