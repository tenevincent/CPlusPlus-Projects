#include "mainwindow.h"
#include <QMenuBar>
#include<QStatusBar>
#include <QLabel>
#include <QHBoxLayout>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{




    auto layout = new QHBoxLayout;






    auto menuBar = this->menuBar();
    auto menu = menuBar->addMenu("File");
    menu->addMenu("Open");
    menu->addMenu("Save");
    menu->addMenu("Exit");

    menuBar->addMenu("Edit");
    menuBar->addMenu("Window");
    menuBar->addMenu("Settings");



    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");
    QPushButton *button4 = new QPushButton("Four");
    QPushButton *button5 = new QPushButton("Five");


    this->setLayout(layout);

    layout->addWidget(btnHello);

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(button5);

    this->setLayout(layout);





    //btnHello->move(200,200);


    connect(btnHello,&QPushButton::clicked,[=](){

        /*
             //The hard way
             QMessageBox message;
             message.setMinimumSize(300,200);
             message.setWindowTitle("Message Title");
             message.setText("Something happened");
             message.setInformativeText("Do you want to do something about it ?");
             message.setIcon(QMessageBox::Critical);
             message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
             message.setDefaultButton(QMessageBox::Cancel);

             int ret = message.exec();
             */

        /*
             //Critical Message
             int ret = QMessageBox::critical(this,"Message Title","Something happened. Do you want to do something about it ?",
                                             QMessageBox::Ok | QMessageBox::Cancel);
             */


        /*
             //Information Message
             int ret = QMessageBox::information(this,"Message Title","Something happened. Do you want to do something about it ?",
                                             QMessageBox::Ok | QMessageBox::Cancel);
             */


        //Question
        int ret = QMessageBox::question(this,"Message Title","Something happened. Do you want to do something about it ?",
                                        QMessageBox::Ok | QMessageBox::Cancel);



        //Warning message
        //int ret = QMessageBox::warning(this,"Message Title","Something happened. Do you want to do something about it ?",
        //                              QMessageBox::Ok | QMessageBox::Cancel);
        //


        if ( ret == QMessageBox::Ok)
        {
            qDebug() << "User clicked on OK";
        }

        if ( ret == QMessageBox::Cancel)
        {
            qDebug() << "User clicked on Cancel";
        }

    });




    std::unique_ptr<QLabel> labelPtr( new QLabel());
    labelPtr->setText("Uploading file...");

    this->statusBar()->addWidget(labelPtr.get());


}

MainWindow::~MainWindow()
{
}

