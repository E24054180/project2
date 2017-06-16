#include "hero.h"

hero::hero(QObject *parent) : QObject(parent)
{

}

void hero::dead()
{
    if(x()<=100)
    {
        setPos(x(),y());
    }

    else if(x()>=690)
    {
       setPos(x(),y());
    }

    else if(y()<=50)
    {
        setPos(x(),y());
    }

    else if(y()>=800){
        setPos(x(),y());
    }
}





