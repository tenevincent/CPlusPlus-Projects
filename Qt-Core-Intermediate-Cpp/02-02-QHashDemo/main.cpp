#include <QCoreApplication>
#include <QHash>
#include <QDebug>
#include "person.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    QHash<QString, Person> ages;
    ages.insert("Bryan", Person("Vincent 01", "Tene 01"));
    ages.insert("Tammy", Person("Vincent 02", "Tene 02"));
    ages.insert("Heather", Person("Vincent 03", "Tene 03"));
    ages.insert("Chris", Person("Vincent 04", "Tene 04"));
    ages.insert("Rango", Person("Vincent 05", "Tene 05"));

    qInfo() << "Bryan is " << ages["Bryan"].get_fullName() << "years old";
    qInfo() << "Keys: " << ages.keys();
    qInfo() << "Size: " << ages.size();

    foreach(QString key, ages.keys()) {
        qInfo() << key << " = " << ages[key].get_fullName();
    }


    return a.exec();
}
