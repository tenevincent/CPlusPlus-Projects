#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    QButtonGroup *buttonGroup =  new QButtonGroup;
    buttonGroup->addButton(ui->checkBoxWindows);
    buttonGroup->addButton(ui->checkBoxMac);
    buttonGroup->addButton(ui->checkBoxLinux);

    buttonGroup->setExclusive(true);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkBoxWindows_toggled(bool checked)
{
    qDebug() << "Check windows status: " << checked << endl;
}

void Widget::on_checkBoxCocaCola_toggled(bool checked)
{
     qDebug() << "Check Coca cola toggle status: " << checked << endl;
}

void Widget::on_radioButtonCocaCola_2_toggled(bool checked)
{
     qDebug() << "Check coca cola 2 status: " << checked << endl;
}

void Widget::on_pushButtonSavce_clicked()
{
     qDebug() << "Check Windows Status: " << ui->checkBoxWindows->isChecked() << endl;
}

void Widget::on_pushButtonSetState_clicked()
{
    if(ui->checkBoxWindows->isChecked()){
        ui->checkBoxLinux->setChecked(true);
    }
    else{
          ui->checkBoxWindows->setChecked(true);
    }
}
