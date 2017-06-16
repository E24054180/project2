#include "witch.h"

witch::witch(QObject *parent) : QObject(parent)
{

}

void witch::move()
{
    if(y()<=350&&y()>250)
    {
        emit battle();
        emit attack();
        if(hp<0)
        {
         delete this;
         emit dead();
        }

   }
    else if(y()>350&&y()<=400)
    {
        emit battle();
        setPos(x(), y() - 15);
        if(hp<0)
        {
         delete this;
         emit dead();
        }

    }
   else if(y()>400)
    {
        setPos(x(), y() - 15);
        if(hp<0)
        {
         delete this;
         emit dead();
        }
    }
}

void witch::attackbytower()
{
    hp=hp-500;
}


