#include <QCoreApplication>
#include <QDebug>


#include "test.h"
#include "widget.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    TestClass::instance()->name = "Bryan";

    qInfo() << TestClass::instance()->name;

    for(int i = 0; i < 5; i++) {
        widget w;
        w.makeChanges("Widget: " + QString::number(i));
    }


    qInfo() << TestClass::instance()->name;



    return a.exec();
}
