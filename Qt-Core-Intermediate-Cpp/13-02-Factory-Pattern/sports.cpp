#include "sports.h"

sportsCar::sportsCar(QObject *parent) : Car(parent)
{

}


void sportsCar::drive()
{
    qInfo() << "Max speed 120 mph";
}
