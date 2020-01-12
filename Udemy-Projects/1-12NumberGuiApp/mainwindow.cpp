#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <time.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialize
    srand(time(NULL)) ;

    // Generate random number
    this->secretNumber =  rand() % 10 +1;

    qDebug() << "Secret number generated" << QString::number(secretNumber) << endl;


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonGuess_clicked()
{
    this->guessNumber = ui->spinBox->value();

    if(guessNumber == secretNumber){
        ui->labelMessage->setText("Number is equals");
    }
    else if (secretNumber < guessNumber){
        ui->labelMessage->setText("Number is lower than  that");
    }
    else if (secretNumber > guessNumber){
        ui->labelMessage->setText("Number is greater than  that");
    }
    qDebug() << "The guees number is: " << QString::number(guessNumber) << endl;
}

void MainWindow::on_pushButtonStartOver_clicked()
{
    this->ui->spinBox->setValue(1);
    this->secretNumber =  rand() % 10 +1;
     qDebug() << "Secret number generated" << QString::number(secretNumber) << endl;
}
