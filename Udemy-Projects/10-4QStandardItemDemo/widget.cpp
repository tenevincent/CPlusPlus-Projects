#include "widget.h"
#include "ui_widget.h"
#include <QModelIndex>
#include <QDebug>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    // TreeModel
    treeModel = new QStandardItemModel(this);
    auto parentIndex = QModelIndex(); // default

    for (int i = 0; i < 5; i++) {
        qDebug() << "current index: " << QString::number(i);

        treeModel->insertRow(0,parentIndex);
        treeModel->insertColumn(0,parentIndex);

        parentIndex = treeModel->index(0,0,parentIndex);
        QString value = QString("item %0").arg(i);
        treeModel->setData(parentIndex,QVariant::fromValue(value));
    }
  ui->treeView->setModel(treeModel);





    // Table model
    int rowCount = 20;
    int columnCount = 5;

    tableModel = new QStandardItemModel(this);
    tableModel->setRowCount(rowCount);
    tableModel->setColumnCount(columnCount);

    for(int ii = 0; ii < rowCount; ii++){
        for (int jj = 0; jj < columnCount; jj++) {
            QString data = QString("row %0, column %1").arg(ii).arg(jj);
            QModelIndex index = tableModel->index(ii,jj,QModelIndex());
            tableModel->setData(index,QVariant(data));
        }
    }





    ui->tableView->setModel(tableModel);

}

Widget::~Widget()
{
    delete ui;
}





void Widget::on_tableView_clicked(const QModelIndex &index)
{

    auto data = tableModel->data(index,Qt::DisplayRole).toString();
      qDebug() << "The data is: " << data;
}
