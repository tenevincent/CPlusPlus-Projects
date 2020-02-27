#include <QCoreApplication>
#include <iostream>
#include <QDebug>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    if(0){
        cout << "Hello" << endl;
        qInfo() << "hello";

        int age = 44;
        cout << age << endl;
        cout << endl;
        cout << flush;

        // cin is used to capture a value on the standard IO
        cin >> age;
        qInfo() << "You entered: " << age;

    }

    // qDebug
    cerr << "Error out" << endl;

    // . QDebug vs cout
    {
        int age = 44;
        qInfo() << "Enter your age:";
        cin >> age;
        qInfo() << "you are " << age << " years old";

        qInfo() << "Information";
        qDebug() << "Debug"; // something we don´t want the users to see
        qCritical() << "Critical";

        // qFatal("Test CRASH  !!!!!");
    }

    return a.exec();
}
