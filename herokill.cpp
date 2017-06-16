#include "herokill.h"

herokill::herokill(QObject *parent) : QObject(parent)
{

}

void herokill::fly()
{
    setPos(x(), y() - 40);
            if(y() < 260)
            {
                if(x()>=200&&x()<=250)
                {
                emit bomb1();

                }

                 else if(x()>=420&&x()<=460)
                {
                 emit bomb2();

                }
                delete this;
             }

}
