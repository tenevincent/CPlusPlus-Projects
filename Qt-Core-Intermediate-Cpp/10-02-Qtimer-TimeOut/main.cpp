#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    TimerTest t;
    t.startTask();


    return a.exec();
}
