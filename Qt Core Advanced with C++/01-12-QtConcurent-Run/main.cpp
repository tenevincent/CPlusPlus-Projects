#include <QCoreApplication>
#include <QDebug>
#include <QtConcurrent/QtConcurrent>
#include <QThread>
#include <QThreadPool>



void loop()
{
    for (int i = 0; i < 10;i++)
    {
        qInfo() << "Loop" << i << " on: " << QThread::currentThread();
    }
}

void test()
{
    qInfo() << "Test on: " << QThread::currentThread();
    loop();
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QThread::currentThread()->setObjectName("Main");

    QThreadPool pool;
    QFuture<void> future = QtConcurrent::run(&pool, test);
    qInfo() << "Main on: " << QThread::currentThread();
    loop();



    return a.exec();
}
