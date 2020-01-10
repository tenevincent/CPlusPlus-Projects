#include "customerform.h"
#include "ui_customerform.h"

CustomerForm::CustomerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerForm)
{
    ui->setupUi(this);
}

CustomerForm::~CustomerForm()
{
    delete ui;
}
