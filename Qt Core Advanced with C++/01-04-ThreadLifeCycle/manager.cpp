
#include "manager.h"

Manager::Manager(QObject *parent) : QObject(parent)
{
    for(int i = 0;i < 5;i++)
    {
        std::shared_ptr<QThread> thread(new QThread(this));

        //QThread* thread = new QThread(this);
        thread->setObjectName("Thread " + QString::number(i));
        qInfo() << "Created: " << thread->objectName();

        connect(thread.get(),&QThread::started, this, &Manager::started);
        connect(thread.get(),&QThread::finished, this, &Manager::finished);

        threads.append(thread);
    }
}

void Manager::start()
{
    qInfo() << "Starting...";

    for(auto & thread : threads)
    {
        qInfo() << "Starting: " << thread->objectName();
        Counter* counter = new Counter(); //NO PARENT!!!!
        counter->moveToThread(thread.get());
        //counter->start(); //Single Thread!!! ==> this will run in a single thread!

        connect(thread.get(),&QThread::started, counter,&Counter::start);
        thread->start();
    }
}

void Manager::started()
{
    QThread* thread = qobject_cast<QThread*>(sender());
    if(!thread) return;
    qInfo() << "Started: " << thread->objectName();
}

void Manager::finished()
{
    QThread* thread = qobject_cast<QThread*>(sender());
    if(!thread) return;
    qInfo() << "Finished: " << thread->objectName();
}
