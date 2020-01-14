#include "widget.h"
#include "ui_widget.h"
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QGridLayout *gridLayout = new QGridLayout;

    // Add elements to  the layout
    gridLayout->addWidget(ui->pushButton01,0,0);
    gridLayout->addWidget(ui->pushButton02,0,1);
    gridLayout->addWidget(ui->pushButton03,0,2,3,1);

    gridLayout->addWidget(ui->pushButton04,1,0);
    gridLayout->addWidget(ui->pushButton05,1,1);
    //gridLayout->addWidget(ui->pushButton06,1,2);


    gridLayout->addWidget(ui->pushButton07,2,0,1,3);
    //gridLayout->addWidget(ui->pushButton08,2,1);
    gridLayout->addWidget(ui->pushButton09,2,2);




    this->setLayout(gridLayout);
}

Widget::~Widget()
{
    delete ui;
}

