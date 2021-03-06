#include <QCoreApplication>
#include <QThread>
#include <QDebug>
#include <QTimer>
#include <QSharedPointer>
#include "test.h"

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

       qInfo() << "Application Thread: " << a.thread();
       qInfo() << "Current Thread: " << QThread::currentThread();

       TestObject test;
       qInfo() << "Timer Thread: " << test.thread();

       QThread thread;
       sptr.reset(&thread);
       test.moveToThread(&thread);



       qInfo() << "Timer Thread: " << test.thread();

       test.start();

       qInfo() << "Thread State:" << thread.isRunning();
       thread.start();

       QTimer timer;
       timer.singleShot(15000,&timeout);

    return a.exec();
}
