#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonSubmit_clicked()
{
qDebug() << "Submitting the data..."  ;

auto firstNameTxt = this->ui->lineEditFirstName;
qDebug() << "First name: " << firstNameTxt->text();
qDebug() << "Last name: " << this->ui->lineEditLastName->text();
qDebug() << "comment name: " << this->ui->plainTextEdit->toPlainText() ;


}
