#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "employeedialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




}

MainWindow::~MainWindow()
{
    delete dialog;
    delete ui;
}


void MainWindow::on_provideInfoButton_clicked()
{



    /*
    //Show the dialog model
    int ret =dialog->exec();

    if( ret == QDialog::Accepted)
    {
        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();

        qDebug() << "Dialog accepted ,position is : " << position << " and favorite os is : " << os;
        ui->infoLabel->setText("Your position is : " + position + " and your favorite os is : " + os);
    }

    if( ret == QDialog::Rejected)
    {
        qDebug() << "Dialog rejected";
    }
    */

    //Show the dialog non model
    connect(dialog,&EmployeeDialog::accepted,[=](){

        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();

        qDebug() << "Dialog accepted ,position is : " << position << " and favorite os is : " << os;
        ui->infoLabel->setText("Your position is : " + position + " and your favorite os is : " + os);


    });

    connect(dialog,&EmployeeDialog::rejected,[=](){
        qDebug() << "Dialog rejected";

    });


    //Show the dialog
    dialog->show();
    dialog->raise();
    dialog->activateWindow();

}
