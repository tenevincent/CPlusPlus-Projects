
#include "person.h"

Person::Person(QString firstName, QString lastName):
    firstName(firstName), lastName{lastName}
{

}

QString Person::get_fullName()
{
    return  this->firstName + " " + this->lastName;
}
