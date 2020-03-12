#include <QCoreApplication>

#include <QThread>
#include <QDebug>
#include <QTimer>
#include <QSharedPointer>
#include "test.h"
#include <QObject>


static QSharedPointer<QThread> sptr;
void timeout()
{
    if(!sptr.isNull())
    {
        qInfo() << "Time out - stopping other thread from: " << QThread::currentThread();;
        sptr.data()->quit();
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestObject test;
    qInfo() << "Timer Thread: " << test.thread();

    QThread thread;
    sptr.reset(&thread);
    test.moveToThread(&thread);
    qInfo() << "Timer Thread: " << test.thread();



   //  a.connect(thread,&QThread::started, test,&TestObject::start);

    test.start();
    qInfo() << "Thread State:" << thread.isRunning();
    thread.start();

    QTimer timer;
    timer.singleShot(5000,&timeout);




    return a.exec();
}
