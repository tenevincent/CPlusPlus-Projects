#include <QCoreApplication>
#include <QDebug>

//Custom macro
#define add(a,b) ((a)+(b))



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    //Easy...but dangerous
       qInfo() << add(1,2);

       //Lets break it!

       qInfo() << add("Test",22);
       qInfo() << add(true,true);
       qInfo() << add(false, true);
       qInfo() << add(false, false);
       qInfo() << add("This is a test",'\n');
       qInfo() << add("Test",'/n');



    return a.exec();
}
