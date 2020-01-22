#include <QCoreApplication>
#include <QDataStream>
#include <QDebug>
#include <QDir>
#include <QFile>
#include "person.h"
#include <employee.h>
#include "converter.h"
#include "person.h"



void writeJson(QString path) {
    Person t;
    t.fill();
    converter::writeJson(&t, path);
}

void readJson(QString path) {
    Person *t;
    t = converter::readJson(path);

    if(!t) {
        qInfo() << "Object not loaded";
        return;
    }

    qInfo() << "Name: " << t->name();
    foreach(QString key, t->map().keys()) {
        qInfo() << key << " : " << t->map().value(key);
    }
}




/*
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


bool saveFile(const TestClass &testClass,QString path) {
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
    TestClass t;
    ds >> t;

    file.close();

    qInfo() << "Name: " << t.name();
    foreach(QString key, t.map().keys()) {
        qInfo() << key << " : " << t.map().value(key);
    }

    return true;
}
*/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    {
         QString pathEmployeeXml = "employee.xml";

        Employee employee(&a);
        employee.setFirstName("Vincent De Paul");
        employee.setLastName("Tene Kengne");
        employee.setEmployeeId(1102);
        employee.setDepartment("Software Development");

        converter::writeEmployeeXml(employee, pathEmployeeXml);

        auto newEmployee = converter::readEmployeeXml(pathEmployeeXml);
        qDebug() << "employee First name: " << newEmployee->FirstName() ;
        qDebug() << "employee Last name: " << newEmployee->LastName() ;
        qDebug() << "employee Department: " << newEmployee->Department() ;
        qDebug() << "employee Employee Id: " << newEmployee->EmployeeId() ;


    }

    {
        QString path = "employee.json";


        Employee employee(&a);
        employee.setFirstName("Vincent De Paul");
        employee.setLastName("Tene Kengne");
        employee.setEmployeeId(1102);
        employee.setDepartment("Software Development");

        converter::writeEmployeeJson(employee, path);




        // read employee
        auto newEmployee = converter::readEmployeeJson(path);
        qDebug() << "employee First name: " << newEmployee->FirstName() ;
        qDebug() << "employee Last name: " << newEmployee->LastName() ;
        qDebug() << "employee Department: " << newEmployee->Department() ;
        qDebug() << "employee Employee Id: " << newEmployee->EmployeeId() ;



    }


    QString path = "test_json.json";

    writeJson(path);
    readJson(path);


    /*
    QString path = "test.txt";

    TestClass testClass;
    testClass.fill();
    if(saveFile(testClass,path)) {
        loadFile(path);
    }

    {

        QString employeeFileName = "employee.txt";

        Employee employee(&a);
        employee.setFirstName("Vincent De Paul");
        employee.setLastName("Tene Kengne");
        employee.setEmployeeId(1102);
        employee.setDepartment("Software Development");

        saveEmployeeObjectToFile(employee,employeeFileName);


        //loadEmployeeFile(employeeFileName);
    }
    */




    return a.exec();
}
