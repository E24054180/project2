#include "ourtower_left.h"

ourtower_left::ourtower_left(QObject *parent) : QObject(parent)
{

}

void ourtower_left::attackbygiant()
{
    hp = hp -300;
}

void ourtower_left::attackbyarcher()
{
    hp = hp -900;
}

void ourtower_left::attackbywitch()
{
    hp = hp -600;
}

void ourtower_left::attackbyprince()
{
    hp = hp -600;
}




