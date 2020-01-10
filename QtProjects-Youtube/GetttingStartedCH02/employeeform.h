#ifndef EMPLOYEEFORM_H
#define EMPLOYEEFORM_H

#include <QWidget>

namespace Ui {
class EmployeeForm;
}

class EmployeeForm : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeForm(QWidget *parent = nullptr);
    ~EmployeeForm();

public:
    Ui::EmployeeForm *ui;
};

#endif // EMPLOYEEFORM_H
