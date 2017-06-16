#include "hero.h"

hero::hero(QObject *parent) : QObject(parent)
{

}


void hero::attackbytower()
{
    if(y()<400&&(x()<420||x()>285))
    {
        hp = hp - 500;

        if(hp<=0)
        {
            emit dead();
            delete this;
        }
    }
}

void hero::attacktower()
{
     if(y()<400&&x()>200&&x()<250)
     {
         emit attack1();
     }

     else if(y()<400&&x()>420&&x()<460)
     {
         emit attack2();
     }
}




