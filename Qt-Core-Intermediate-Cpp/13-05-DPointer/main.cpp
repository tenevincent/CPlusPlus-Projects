#include <QCoreApplication>
#include "cat.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Cat cat;
    cat.meow();
    cat.hiss();


    return a.exec();
}
