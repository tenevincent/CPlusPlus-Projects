#include <QCoreApplication>
#include "test.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    TestObject test;
    test.process();


    return a.exec();
}
