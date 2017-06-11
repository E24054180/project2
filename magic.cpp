#include "magic.h"

magic::magic(QObject *parent) : QObject(parent)
{

}

void magic::move()
{
    if(y()>=240)
    {
        setPos(x(), y() - 70);
    }

    else
    {
        emit attack();
        delete this;
    }

}
