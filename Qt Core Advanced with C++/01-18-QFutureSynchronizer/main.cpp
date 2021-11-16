#include <QCoreApplication>
#include <QDebug>
#include <QThread>
#include <QtConcurrent>
#include <QFuture>
#include <QFutureSynchronizer>



void dostuff(int value)
{
    for (int i = 0;i < 10; i++)
    {
        QThread::currentThread()->msleep(100);
        qInfo() << "Thread: " << value << " = " << i;
    }
}

void runthread()
{
    QFutureSynchronizer<void> sync;
    for (int i = 0;i < 10;i++)
    {
        QFuture<void> f = QtConcurrent::run(&dostuff,i);
        sync.addFuture(f);
    }
    //waitForFinished called in the QFutureSynchronizer deconstructor
}



int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);


    runthread();
    qInfo() << "Done";


    return a.exec();
}
