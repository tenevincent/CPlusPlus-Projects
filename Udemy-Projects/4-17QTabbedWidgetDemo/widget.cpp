#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_3_clicked()
{
    qDebug() << "Tab 1 clicked"   ;
    ui->tabWidget->setCurrentIndex(2);
}

void Widget::on_tabWidget_currentChanged(int index)
{
      qDebug() << "Selected Tab: " << index   ;
}

void Widget::on_tabWidget_tabCloseRequested(int index)
{
     qDebug() << "Tab closed requested " << index   ;
}

void Widget::on_tabWidget_tabBarClicked(int index)
{
     qDebug() << "The tab was clicked... " << index   ;
}
