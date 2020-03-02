#include "test.h"

#include "test.h"

TestObject::TestObject(QObject *parent) : QObject(parent)
{

}

void TestObject::timeout()
{
    qInfo() << QDateTime::currentDateTime().toString() << " on " << QThread::currentThread();
}

void TestObject::start()
{
    connect(&timer, &QTimer::timeout, this, &TestObject::timeout);
    timer.setInterval(1000);
    timer.start();
}
