
#include "person.h"


Person *Person::build(Person::persontype type)
{
    Person *p = new Person(nullptr);
    p->m_type = type;

    return p;
}

Person::persontype Person::role()
{
    return m_type;
}

Person::Person(QObject *parent) : QObject(parent)
{

}
