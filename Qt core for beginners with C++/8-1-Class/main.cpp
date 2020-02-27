#include <QCoreApplication>
#include "animal.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;
    Animal dog;
    Animal bird;

    cat.speak("meow");
    dog.speak("bark");
    bird.speak("caw");



    return a.exec();
}
