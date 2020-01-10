#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <memory>
#include <QSpacerItem>
#include "customerform.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton->setText("Disconnect");

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar,SLOT(setValue(int)) );
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar2,SLOT(setValue(int)) );

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar2,SLOT(setValue(int)) );

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), statusBarProgress,SLOT(setValue(int)) );



    statusBarLabel->setText("An element has been added!");

    statusBarProgress->setValue(10);
    statusBarProgress->setMinimumWidth(200);


    QLabel *spacer = new QLabel(); // fake spacer


    ui->statusbar->addPermanentWidget(statusBarLabel);
    ui->statusbar->addPermanentWidget(spacer, 1);
    ui->statusbar->addPermanentWidget(statusBarProgress);



    // Add custom view
    {
        CustomerForm *customerForm = new CustomerForm();
        ui->tab2->setLayout(new QHBoxLayout());
        ui->tab2->layout()->addWidget(customerForm);
    }



    // Sets the style here
    {
        ui->splitter->setStyleSheet("QSplitter::handle{background:gray; margin-left:8px; margin-right:8px}" );
    }

    //ui->setStyleSheet("QSplitter::handle{background: red;}" );

    ui->tabWidget->setTabText(0,"Settings");
    ui->tabWidget->setTabText(1,"Data Table");
    ui->tabWidget->setTabText(2,"Line Chart");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent* event){


    QMessageBox::StandardButton answer = QMessageBox::question(this, "Gann Dialolg Pro", "Do you want to close this application?",  QMessageBox::Yes|QMessageBox::No);

    if (answer == QMessageBox::Yes) {
        event->accept();
    }
    else{
        event->ignore();
    }



}



void MainWindow::on_pushButton_clicked()
{
    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar2,SLOT(setValue(int)) );
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{

    QMessageBox::StandardButton ret = QMessageBox::warning(this, tr("My Application"),
                                                           tr("The document has been modified.\n"
                                                              "Do you want to save your changes?"),
                                                           QMessageBox::Yes|QMessageBox::No);


    if(ret == QMessageBox::Yes){
        // int selectedIndex = ui->tabWidget->currentIndex();
        ui->tabWidget->removeTab(index);
    }



}
