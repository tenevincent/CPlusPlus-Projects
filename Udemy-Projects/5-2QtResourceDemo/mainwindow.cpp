#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("://images/Schimmel-an-Wand.jpg");
    ui->label->setPixmap(pix.scaled(400,400));;


}

MainWindow::~MainWindow()
{
    delete ui;
}

