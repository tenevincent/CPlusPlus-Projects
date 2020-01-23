

#include "test.h"


TestClass *TestClass::createInstance()
{
    return new TestClass();
}

TestClass::TestClass(QObject *parent) : QObject(parent)
{

}

TestClass *TestClass::instance()
{
    return  Singleton<TestClass>::instance(TestClass::createInstance);
}
