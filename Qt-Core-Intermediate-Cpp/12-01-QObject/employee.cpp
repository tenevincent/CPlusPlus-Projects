#include "employee.h"

Employee::Employee(int len)
{
    qDebug() << "Normal constructor allocating ptr" << endl;

    // allocate memory for the pointer;
    ptr = new int(len);
}

Employee::Employee(const Employee &obj)
{
    qDebug() << "Copy constructor allocating ptr." << endl;
      ptr = new int(*obj.ptr);
}

Employee::~Employee()
{
    qDebug() << "Freeing memory!" << endl;
    delete ptr;
}

int Employee::getLength()
{
    return  *this->ptr;
}
