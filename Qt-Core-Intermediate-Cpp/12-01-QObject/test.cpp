#include "test.h"


TestClass::TestClass(QObject *parent) : QObject(parent)
{

}

void TestClass::dostuff()
{

}

void TestClass::dostuff(QString param)
{
    Q_UNUSED(param);
}

void TestClass::myslot()
{

}

QString TestClass::getDepartement() const
{
    return _departement;
}

void TestClass::setDepartement(const QString &value)
{
    _departement = value;
}

QString TestClass::getLastName() const
{
    return _lastName;
}

void TestClass::setLastName(const QString &value)
{
    _lastName = value;
}

QString TestClass::getFirstName() const
{
    return _firstName;
}

void TestClass::setFirstName(const QString &value)
{
    _firstName = value;
}
