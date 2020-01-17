#include "test.h"


Test::Test(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Constructed";
}

Test::~Test()
{
    qInfo() << this << "Test Deconstructed";

}

void Test::makeChild(QString name)
{
    Test *child = new Test(this);
    child->setObjectName(name);
}
