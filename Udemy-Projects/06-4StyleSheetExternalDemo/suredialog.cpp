#include "suredialog.h"
#include "ui_suredialog.h"

SureDialog::SureDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SureDialog)
{
    ui->setupUi(this);
}

SureDialog::~SureDialog()
{
    delete ui;
}

void SureDialog::on_okButton_clicked()
{
    this->accept();
}

void SureDialog::on_cancelButton_clicked()
{
    this->reject();
}
