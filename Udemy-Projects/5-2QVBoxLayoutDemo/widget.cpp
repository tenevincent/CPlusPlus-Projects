#include "widget.h"
#include "ui_widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* QHBoxLayout programmatically
    // Define the layout
    QVBoxLayout *layout = new QVBoxLayout;

     // Add thing to the layout
     layout->addWidget(ui->pushButtonOne);
     layout->addWidget(ui->pushButtoTwo);
     layout->addWidget(ui->pushButtonThree);
     layout->addWidget(ui->pushButtonFour);
     layout->addWidget(ui->pushButtonFive);

     // Set  the layout to the widget
     this->setLayout(layout);
    */

}

Widget::~Widget()
{
    delete ui;
}

