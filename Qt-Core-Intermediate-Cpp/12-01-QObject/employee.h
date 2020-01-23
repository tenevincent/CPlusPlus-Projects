#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QObject>
#include <QDebug>


class Employee
{

public:

    Employee( int len );
    Employee( const Employee &obj);  // copy constructor
    ~Employee();

    int getLength( );


private:
    int *ptr;

};

#endif // EMPLOYEE_H
