#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->frame->setLayout(new QHBoxLayout());
    ui->frame->layout()->addWidget(new CustomForm());

}

MainWindow::~MainWindow()
{
    delete ui;
}

