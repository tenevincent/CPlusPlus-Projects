#include <QCoreApplication>
#include <stdio.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    puts("It's me, your first program.");



    return a.exec();
}
