#include <QCoreApplication>
#include <QTimer>
#include <QDebug>
#include "pool.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Pool p;
    for(int i = 0; i < 100; i++) {
        p.work(i);
    }



    return a.exec();
}
