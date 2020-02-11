
#include "test.h"

TestObject::TestObject(QObject *parent) : QObject(parent)
{
    qInfo() << "Constructed: " << this;
}

TestObject::~TestObject()
{
    qInfo() << "Deconstructed: " << this;
}
