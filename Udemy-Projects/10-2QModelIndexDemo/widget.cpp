#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QString>
#include <QVariant>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new QFileSystemModel(this);
    this->parentIndex = model->setRootPath("C:/GannDialog2019");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{

    int rowCount = model->rowCount(parentIndex);
    qDebug() << "Row count: " << QString::number(rowCount)  ;
    for (int ii = 0; ii < rowCount; ii++) {
        QModelIndex index = model->index(ii,0, parentIndex);
        QVariant data = model->data(index,Qt::DisplayRole);
        qDebug() << "Data item: " << QString::number(ii) << data.toString()  ;
    }

}
