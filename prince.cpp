#include "prince.h"

prince::prince(QObject *parent) : QObject(parent)
{

}

void prince::move()
{
     if(y()>300)
     {
         setPos(x(), y() - 30);
        }
     else if(y()<300)
     {

        delete this;
        }
}


void prince::attackbytower()
{
    hp=hp-500;
}
