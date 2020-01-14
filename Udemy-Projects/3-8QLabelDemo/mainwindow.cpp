#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->labelImasge->move(50,30);
    // Add an image
    QPixmap minionPixmap("://images/wall_image.jpg");
    ui->labelImasge->move(50,100);
    ui->labelImasge->setPixmap((minionPixmap.scaled(400,400)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

