#include "giant.h"

giant::giant(QObject *parent) : QObject(parent)
{

}

void giant::move()
{
    if(y()>400)
    {
        setPos(x(), y() - 10);
   }
    else if(y()<=300&&y()>250)
   {
        emit battle();
        if(hp<0)
        {
         delete this;
         emit dead();
        }
        this->attacktower();
   }
   else if(y()<=400&&y()>300)
    {
        setPos(x(), y() - 10);
        emit battle();
         if(hp<0)
         {
          delete this;
             emit dead();
         }
    }

}

void giant::attacktower()
{
    emit attack();
}
void giant::attackbytower()
{
    hp=hp-500;
}

