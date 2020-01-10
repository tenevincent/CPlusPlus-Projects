#include "employeeform.h"
#include "ui_employeeform.h"

EmployeeForm::EmployeeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeeForm)
{
    ui->setupUi(this);

     auto status = ui->comboBoxEmployeeStatus;
     status->addItem("Unemployed");
       status->addItem("Employed");
         status->addItem("Student");
           status->addItem("Widowed");

}

EmployeeForm::~EmployeeForm()
{
    delete ui;
}
