#include "customform.h"
#include "ui_customform.h"

CustomForm::CustomForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomForm)
{
    ui->setupUi(this);

    ui->listWidget->setStyleSheet("background-color:tomato");
     ui->frame->setStyleSheet("background-color:green");
     ui->label->setStyleSheet("QLabel:hover { color: rgb(60, 179, 113)}");




}

CustomForm::~CustomForm()
{
    delete ui;
}
