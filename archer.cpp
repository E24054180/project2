#include "archer.h"

archer::archer(QObject *parent) : QObject(parent)
{

}

void archer::move()
{

    if(y()<=365&&y()>250)
    {
        emit battle();
        emit attack();
        if(hp<0)
        {
         delete this;
         emit dead();
        }

   }
    else if(y()>365&&y()<=400)
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

void archer::attackbytower()
{
    hp=hp-500;
}
