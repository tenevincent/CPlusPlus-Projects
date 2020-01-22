#ifndef PERSON_H
#define PERSON_H
#include <QString>


class Person
{

private:
    QString firstName;
    QString lastName;


public:
    Person(QString firstName = "", QString lastName= "");
    QString get_fullName();
};

#endif // PERSON_H
