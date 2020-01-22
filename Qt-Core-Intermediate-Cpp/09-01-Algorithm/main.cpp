#include <QCoreApplication>
#include <QString>
#include <QVector>
#include <QtAlgorithms>
#include<QDebug>

class Employee{
public:
    QString firstName;
    QString lastName;

    Employee(QString firstName, QString lastName){
        this->firstName = firstName;
        this->lastName = lastName;
    }

    void setFirstName(const QString &value);
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Copy algorithm
    {
        QStringList list;
        list << "one" << "two" << "three";
        QVector<QString> vect1(3);
        qCopy(list.begin(), list.end(), vect1.begin());
        // vect: [ "one", "two", "three" ]
        for (auto item : vect1) {
            qDebug() << item;
        }
    }


    {
        QList<int> list;
        list << 3 << 3 << 6 << 6 << 6 << 8;

        int countOf6 = 0;
        qCount(list.begin(), list.end(), 6, countOf6);
        qDebug() << "The size is " << countOf6;
    }


    {
        QList<Employee *> list;
        list.append(new Employee("Blackpool", "Stephen"));
        list.append(new Employee("Twist", "Oliver"));
        list.append(new Employee("Twist", "Oliver"));
        list.append(new Employee("Twist", "Oliver"));
        list.append(new Employee("Twist", "Oliver"));

        qDeleteAll(list.begin(), list.end());


        qDebug() << "The length of the list: " << list[0]->firstName;
        qDebug() << "The length of the list: " << list[0]->lastName;

        qDebug() << "The length of the list: " << list.length();
           list.clear();
    }

    {
        QList<Employee*> list;
          for(int i = 0; i< 10; i++) {
              Employee *t = new Employee("Twist", "Oliver"); //notice no parent!!!
              t->setFirstName(QString::number(i));
              list.append(t);
          }

          qInfo() << list.at(0);

          //Delete them all!
          qDeleteAll(list);

          //Will crash!
         qInfo() << "item:  " <<  list.at(0);

          //Objects are still in the list but invalid pointers - clear the list!
          list.clear();
    }



    return a.exec();
}

void Employee::setFirstName(const QString &value)
{
firstName = value;
}
