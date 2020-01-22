#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include <QObject>
#include <QDebug>


class Employee : public QObject
{

    Q_OBJECT

public:
    Employee(QObject *parent = nullptr);


    friend QDataStream& operator <<(QDataStream &stream, const Employee &testObject) {
        qInfo() << "Operload <<";
        stream << testObject.m_FirstName;
        stream << testObject.m_LastName;
        stream <<  testObject.m_EmpId;
        stream << testObject.m_Department;

        return stream;
    }

    friend QDataStream& operator >>(QDataStream &stream, Employee &testObject) {
        qInfo() << "Operload >>";
        stream >> testObject.m_FirstName;
        stream >> testObject.m_LastName;
        stream >> testObject.m_EmpId;
        stream >> testObject.m_Department;

        return stream;
    }


    QString FirstName() const;
    void setFirstName(const QString &FirstName);

    QString LastName() const;
    void setLastName(const QString &LastName);

    int EmployeeId() const;
    void setEmployeeId(int EmployeeId);

    QString Department() const;
    void setDepartment(const QString &Department);


private:
    QString EmpId() const;

private:
    QString m_FirstName;
    QString m_LastName;
    int m_EmployeeId;
    QString m_EmpId;
    QString m_Department;

};



#endif // EMPLOYEE_H
