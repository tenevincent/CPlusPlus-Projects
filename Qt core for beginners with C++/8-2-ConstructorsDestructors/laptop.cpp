
#include "laptop.h"


Laptop::Laptop(QObject *parent, QString name) : QObject(parent)
{
    //When created - "this" is automatically created
    this->name = name;
    qInfo() << this << name << " constructed";
}

Laptop::~Laptop()
{
    //When destroyed
    qInfo() << this << name << " deconstructed";
}

double Laptop::asKilograms()
{
    return this->weight * 0.453592;
}

void Laptop::test()
{
    qInfo() << this << name << asKilograms();

}
