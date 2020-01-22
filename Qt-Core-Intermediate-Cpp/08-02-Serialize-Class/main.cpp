#include <QCoreApplication>
#include <QDataStream>
#include <QDebug>
#include <QDir>
#include <QFile>
#include "person.h"
#include <employee.h>



bool saveEmployeeObjectToFile(const Employee &employee,QString path) {
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) return false;

    QDataStream ds(&file);
    ds.setVersion(QDataStream::Qt_5_11);
    ds << employee;
    file.close();
    return true;
}

bool loadEmployeeFile(QString path) {
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) return false;

    QDataStream ds(&file);
    Employee t;
    ds >> t;

    file.close();

    qInfo() << "Name: " << t.FirstName();
    qInfo() << "Last Name: " << t.LastName();
    qInfo() << "Department: " << t.Department();
    qInfo() << "EmployeeId: " << t.EmployeeId();

    return true;
}


bool saveFile(const Person &testClass,QString path) {
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) return false;

    QDataStream ds(&file);
    ds.setVersion(QDataStream::Qt_5_11);

    //ds << t->name();
    // ds << t->map();

    ds << testClass;

    file.close();
    return true;
}

bool loadFile(QString path) {
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) return false;

    QDataStream ds(&file);
    Person t;
    ds >> t;

    file.close();

    qInfo() << "Name: " << t.name();
    foreach(QString key, t.map().keys()) {
        qInfo() << key << " : " << t.map().value(key);
    }

    return true;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path = "test.txt";

    Person testClass;
    testClass.fill();
    if(saveFile(testClass,path)) {
        loadFile(path);
    }

    {

        QString employeeFileName = "employee.txt";


        /*
        Employee employee(&a);
        employee.setFirstName("Vincent De Paul");
        employee.setLastName("Tene Kengne");
        employee.setEmployeeId(1102);
        employee.setDepartment("Software Development");

        saveEmployeeObjectToFile(employee,employeeFileName);
        */

        loadEmployeeFile(employeeFileName);
    }




    return a.exec();
}
