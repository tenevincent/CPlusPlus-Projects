#include <QCoreApplication>
#include <QMetaEnum>
#include "car.h"

//Factory method
/*
    A framework needs to standardize the architectural model for a range of applications,
    but allow for individual applications to define their own domain objects and provide for their instantiation.
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMetaEnum metaEnum = QMetaEnum::fromType<Car::Model>();
    for(int i = 0; i < metaEnum.keyCount(); i++) {
        QString key = metaEnum.key(i);
        qInfo() << "Attempting to create: " << key;
        Car::Model model = static_cast<Car::Model>(metaEnum.keysToValue(key.toLatin1()));
        Car *c = Car::make(model);

        //car  newCar = dynamic_cast<car>(c);

        c->drive();
        qInfo("");
    }


    return a.exec();
}
