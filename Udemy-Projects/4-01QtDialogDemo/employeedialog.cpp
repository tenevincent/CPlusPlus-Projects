#include "employeedialog.h"
#include "ui_employeedialog.h"

EmployeeDialog::EmployeeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeDialog)
{
    ui->setupUi(this);
}

EmployeeDialog::~EmployeeDialog()
{

    delete ui;
}

QString EmployeeDialog::getFavoriteOs() const
{

    return  this->favoriteOs;
}

QString EmployeeDialog::getPosition() const
{

    return   this->position;
}

void EmployeeDialog::on_okButton_clicked()
{
    //Collect information
    QString userPosition = ui->positionLineEdit->text();
    if( !userPosition.isEmpty())
    {
        position = userPosition;

        if(ui->windowsRadioButton->isChecked())
        {
            favoriteOs = "Windows";
        }

        if(ui->macRadioButton->isChecked())
        {
            favoriteOs = "Mac";
        }

        if(ui->linuxRadioButton->isChecked())
        {
            favoriteOs = "Linux";
        }
    }



    this->accept();
}

void EmployeeDialog::on_cancelButton_clicked()
{

    this->reject();
}
