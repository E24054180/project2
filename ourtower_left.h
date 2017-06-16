#ifndef OURTOWER_H
#define OURTOWER_H

#include <QObject>

class ourtower : public QObject
{
    Q_OBJECT
public:
    explicit ourtower(QObject *parent = 0);

signals:

public slots:


private:
    int hp = 30000;


};

#endif // OURTOWER_H
