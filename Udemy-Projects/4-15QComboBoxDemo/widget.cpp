#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    ui->comboBox->addItem("Earth");
    ui->comboBox->addItem("Venus");
    ui->comboBox->addItem("Mars");
    ui->comboBox->addItem("Pluton");
    ui->comboBox->addItem("Saturn");
    ui->comboBox->setEditable(true);
}

Widget::~Widget()
{
    delete ui;



}


void Widget::on_pushButtonCaptureValue_clicked()
{
    auto text = ui->label->text();

    text += "The current selected item is " + ui->comboBox->currentText() + "\n";

    ui->label->setText(text);

    text += "The current selected index is " + QString::number(ui->comboBox->currentIndex()) + "\n";
    ui->label->setText(text);
}

void Widget::on_pushButtonSetValue_clicked()
{
    ui->comboBox->setCurrentIndex(3);

}

void Widget::on_pushButtonGetValue_clicked()
{
    auto text = QString::number(ui->comboBox->count());

    ui->label->setText( "Total items: " +  text);


    for (int i = 0; i < ui->comboBox->count(); i++) {
        auto text = ui->label->text();
        text += " " + ui->comboBox->itemText(i) + "\n";
        ui->label->setText(text);
    }

}
