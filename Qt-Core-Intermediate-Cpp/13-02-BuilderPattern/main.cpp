#include <QCoreApplication>

#include <QCoreApplication>
#include <QDebug>
#include <QMetaObject>
#include <QMetaEnum>
#include "person.h"

/*
 * Builder design pattern
 * Build things in a uniform way - millions of ways to do this.
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject classroom;
    QMetaEnum metaEnum = QMetaEnum::fromType<Person::persontype>();

    for(int i = 0; i < 10; i++) {
        Person::persontype type = Person::persontype::STUDENT;
        if(i == 0) type = Person::persontype::PRINCIPAL;
        if(i == 1) type = Person::persontype::TEACHER;

         if(i == 5) type = Person::persontype::TEACHER;
          if(i == 6) type = Person::persontype::TEACHER;

        Person *p = Person::build(type);
        p->setParent(&classroom);


    }

    foreach(QObject *child, classroom.children()) {
        Person *p = qobject_cast<Person*>(child);
        if(p) qInfo() << p << " is a " << metaEnum.valueToKey(p->role());
    }


    return a.exec();
}
