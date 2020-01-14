#include "widget.h"
#include "ui_widget.h"
#include <QAbstractItemView>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFont font = ui->pushButtonAddItem->font();
    font.setPointSize(12);
    this->setFont(font);

    ui->listWidget->addItem("Vincent 1");
    ui->listWidget->addItem("Vincent 2");
    ui->listWidget->addItem("Vincent 3");

    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::addNewItem()
{
    auto newItem = this->ui->lineEdit->text();
    ui->listWidget->addItem(newItem);
    ui->lineEdit->setText("");
}

void Widget::on_pushButtonAddItem_clicked()
{
    addNewItem();
}

void Widget::on_pushButtonDeleteItem_clicked()
{
    auto index = ui->listWidget->currentRow();
    ui->listWidget->takeItem(index);
}

void Widget::on_pushButtonSelectedItems_clicked()
{
    // Gets the list of selected item
    auto items = ui->listWidget->selectedItems();

    for(auto elem : items){
        qDebug() << "-" << elem->text() << " row: " << ui->listWidget->row(elem);
    }

}

void Widget::on_lineEdit_returnPressed()
{
     addNewItem();
}
