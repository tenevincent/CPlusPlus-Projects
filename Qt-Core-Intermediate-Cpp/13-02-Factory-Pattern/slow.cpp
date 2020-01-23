#include "slow.h"

SlowCar::SlowCar(QObject *parent) : Car(parent)
{

}


void SlowCar::drive()
{
    qInfo() << "Max speed 80 mph";
}
