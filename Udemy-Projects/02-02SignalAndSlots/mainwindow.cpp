#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

void MainWindow::changeText()
{
    qDebug() << "the button was clicked" << endl;
    this->ui->label->setText("the button was clicked");
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // String notation
    //connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(changeText()) );

    // Connect using the functor
    //connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::changeText);
    //connect(ui->horizontalSlider,&QSlider::valueChanged, ui->labelValue, &QLabel::setNum);

    connect(ui->horizontalSlider,SIGNAL(valueChanged()),ui->labelValue,SLOT(setNum()) );

      connect(ui->horizontalSlider,&QSlider::valueChanged, ui->progressBar, &QProgressBar::setValue);


    // connect using the lambda
    connect(ui->pushButton,&QPushButton::clicked,this,[=]() {
          ui->label->setText("the button was clicked");
    });



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    this->ui->labelValue->setNum(value);
}
