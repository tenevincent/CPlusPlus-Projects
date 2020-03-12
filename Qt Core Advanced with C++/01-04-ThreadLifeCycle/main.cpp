#include <QCoreApplication>
#include "manager.h"
#include <QThread>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QThread::currentThread()->setObjectName("Main");

    Manager m;
    m.start();


    return a.exec();
}
