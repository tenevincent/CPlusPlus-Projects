#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>


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


void MainWindow::on_pushButton_clicked()
{

    QMessageBox::information(this,"Message","You clicked on that button",QMessageBox::Ok);

    QString text = this->ui->label->text() + "The user has  clicked on the button \n";

this->ui->label->setText(text);

    qDebug() << "The user clicks on the button!" <<endl;
}
