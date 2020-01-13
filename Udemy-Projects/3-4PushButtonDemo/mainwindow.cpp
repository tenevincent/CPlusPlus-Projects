#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QFont>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    /*

    //Clicked signal
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button = new QPushButton("Button1",this);
    button->setMinimumSize(200,100);
    button->setFont(buttonFont);
    connect(button,&QPushButton::clicked,[=](){
       qDebug() << "Button clicked";
    });


    QPushButton * button2 = new QPushButton("Button2",this);
    button2->setMinimumSize(200,100);
    button2->move(205,0);
    button2->setFont(buttonFont);
    connect(button2,&QPushButton::pressed,[=](){
       qDebug() << "Button pressed";
    });

    connect(button2,&QPushButton::released,[=](){
       qDebug() << "Button released";
    });
*/

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "The button was clicked..." << endl;
}

void MainWindow::on_toolButton_clicked()
{
     qDebug() << "The second button was clicked..." << endl;
}

void MainWindow::on_radioButton_clicked()
{
     qDebug() << "The button was clicked..." << endl;
}
