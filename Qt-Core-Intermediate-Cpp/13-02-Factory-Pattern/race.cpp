#include "race.h"

RaceCar::RaceCar(QObject *parent) : Car(parent)
{

}


void RaceCar::drive()
{
    qInfo() << "Max speed 200 mph";
}
