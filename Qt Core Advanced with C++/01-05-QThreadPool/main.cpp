#include <QCoreApplication>
#include <QThread>
#include <QThreadPool>
#include "counter.h"
#include <memory>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QThread::currentThread()->setObjectName("Main");
    std::shared_ptr<QThreadPool> pool (QThreadPool::globalInstance());

    qInfo() << pool->maxThreadCount() << " Threads";

    for (int i = 0; i < 10; i++)
    {
        Counter* counter = new Counter();
        counter->setAutoDelete(true);
        pool->start(counter);
    }



    return a.exec();
}
