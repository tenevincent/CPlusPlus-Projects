#include <QCoreApplication>
#include <QtConcurrent/QtConcurrent>
#include <QDebug>
#include <QThread>
#include <QThreadPool>


//Qt Concurrent - Futures
// ADD QT += concurrent to pro file
//https://doc.qt.io/qt-5/qtconcurrentrun.html

void test(QString name, int max)
{
    for (int i = 0;i < max;i++)
    {
        qInfo() << name << i << QThread::currentThread();
    }
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "name";
       QFuture<void> future = QtConcurrent::run(test,name,5);
       //QFuture<void> future = QtConcurrent::run(test,"name",5);



    return a.exec();
}
