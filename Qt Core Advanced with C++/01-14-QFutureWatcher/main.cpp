#include <QCoreApplication>
#include <QDebug>
#include <QFuture>
#include <QFutureWatcher>
#include <QList>
#include <QtConcurrent>

void multiply(int &value)
{
    qInfo() << "Called: " << value;
    value = value * 10;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // Fill list with integers
    QList<int> list;
    for (int i = 0;i < 200; i++)
    {
        list.append(i);
    }

    QFutureWatcher<void> watcher;
    QFuture<void> future = QtConcurrent::map(list,&multiply);
    watcher.setFuture(future);
    qInfo() << "Back in main!";

    watcher.waitForFinished();


    qInfo() << "Done!";
    qInfo() << list;



    return a.exec();
}
