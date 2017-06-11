#include "enemytower_left.h"

enemytower_left::enemytower_left(QObject *parent) : QObject(parent)
{

}

void enemytower_left::attackbygiant()
{
    hp = hp -300;
}

void enemytower_left::attackbyarcher()
{
    hp = hp -900;
}

void enemytower_left::attackbywitch()
{
    hp = hp -600;
}

void enemytower_left::attackbyprince()
{
    hp = hp -600;
}




