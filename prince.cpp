#include "prince.h"

prince::prince(QObject *parent) : QObject(parent)
{

}

void prince::move()
{
    if(y()<=300&&y()>250)
    {
        emit battle();
        emit attack();
        if(hp<0)
        {
         delete this;
         emit dead();
        }

   }
    else if(y()>300&&y()<=400)
    {
        emit battle();
        setPos(x(), y() - 40);
        if(hp<0)
        {
         delete this;
         emit dead();
        }

    }
   else if(y()>400)
    {
        setPos(x(), y() - 20);
        if(hp<0)
        {
         delete this;
         emit dead();
        }
    }
}

void prince::attackbytower()
{
    hp=hp-500;
}

