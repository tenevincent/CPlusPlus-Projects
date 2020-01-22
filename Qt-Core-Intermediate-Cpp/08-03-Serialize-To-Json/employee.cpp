#include "employee.h"



Employee::Employee(QObject *parent) : QObject(parent)
{

}



QString Employee::FirstName() const
{
    return m_FirstName;
}

void Employee::setFirstName(const QString &FirstName)
{
    m_FirstName = FirstName;
}

QString Employee::LastName() const
{
    return m_LastName;
}

void Employee::setLastName(const QString &LastName)
{
    m_LastName = LastName;
}

int Employee::EmployeeId() const
{
    return m_EmployeeId;
}

void Employee::setEmployeeId(int EmployeeId)
{
    m_EmployeeId = EmployeeId;
}

QString Employee::Department() const
{
    return m_Department;
}

void Employee::setDepartment(const QString &Department)
{
    m_Department = Department;
}

QString Employee::EmpId() const
{
    return QString::number(this->m_EmployeeId);
}
