#include "widget.h"
#include "ui_widget.h"
#include <QPalette>
#include <QColor>
#include <QDebug>
#include <QColorDialog>
#include <QStyle>
#include <QSettings>
#include <QJsonObject>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    for (int i = 0; i < 9 ; i++) {
        this->listColors.append( Qt::black);
    }


    load_button_colors();

}

Widget::~Widget()
{
    delete ui;
}


void Widget::handle_font_color_selection(QPushButton &button, int index)
{

    QColor chosenColor = QColorDialog::getColor( this->listColors.at(index),this,"Choose text color");
    if(chosenColor.isValid())
    {
        this->listColors[index] = chosenColor;


        QString css = QString("background-color:%1").arg(chosenColor.name());
        button.setStyleSheet(css);

        qDebug() << "User choose a valid color";
    }else
    {
        qDebug() << "User choose a invalid color";
    }
}

void Widget::save_color(QString key, QColor color)
{
    QSettings settings("TeneConsulting","SettingsDemo");
    settings.beginGroup("ButtonColor");
    QJsonObject jobject;
    jobject["red"] =  color.red();
    jobject["blue"] =  color.blue();
    jobject["green"] =  color.green();
    // save the color
    settings.setValue(key,jobject);

    settings.endGroup();




}

QColor Widget::load_color(QString key)
{

    int red, green, blue;


    QSettings settings("TeneConsulting","SettingsDemo");
    settings.beginGroup("ButtonColor");

    QJsonObject colorJsonObject = settings.value(key,QVariant(0)).toJsonObject();

    red = colorJsonObject["red"].toInt(0);
    blue = colorJsonObject["blue"].toInt(0);
    green = colorJsonObject["green"].toInt(0);

    settings.endGroup();


    return  QColor(red,green,blue);

}



void Widget::on_pushButton1_clicked()
{

    auto button = this->ui->pushButton1;
    handle_font_color_selection(*button,0);
}

void Widget::on_pushButton_4_clicked()
{
    auto button = this->ui->pushButton_4;
    handle_font_color_selection(*button,1);
}

void Widget::on_pushButton3_clicked()
{
    auto button = this->ui->pushButton3;
    handle_font_color_selection(*button,2);
}

void Widget::on_pushButton4_clicked()
{
    auto button = this->ui->pushButton4;
    handle_font_color_selection(*button,3);
}

void Widget::on_pushButton5_clicked()
{
    auto button = this->ui->pushButton5;
    handle_font_color_selection(*button,4);
}

void Widget::on_pushButton6_clicked()
{
    auto button = this->ui->pushButton6;
    handle_font_color_selection(*button,5);
}

void Widget::on_pushButton7_clicked()
{
    auto button = this->ui->pushButton7;
    handle_font_color_selection(*button,6);
}

void Widget::on_pushButton8_clicked()
{
    auto button = this->ui->pushButton8;
    handle_font_color_selection(*button,7);
}

void Widget::on_pushButton9_clicked()
{
    auto button = this->ui->pushButton9;
    handle_font_color_selection(*button,8);
}

void Widget::on_pushButtonLoadColors_clicked()
{

    load_button_colors();

}


void Widget::on_pushButtonSaveColors_clicked()
{
    for (int i = 0; i < this->listColors.count() ; i++) {
        QString key = QString("button%1").arg(i+1);
        save_color(key, listColors[i]);
    }

}




void Widget::load_button_colors()
{
    this->setLoadedColor("button1",0,this->ui->pushButton1);
    this->setLoadedColor("button2",0,this->ui->pushButton_4);
    this->setLoadedColor("button3",0,this->ui->pushButton3);
    this->setLoadedColor("button4",0,this->ui->pushButton4);
    this->setLoadedColor("button5",0,this->ui->pushButton5);
    this->setLoadedColor("button6",0,this->ui->pushButton6);
    this->setLoadedColor("button7",0,this->ui->pushButton7);
    this->setLoadedColor("button8",0,this->ui->pushButton8);
    this->setLoadedColor("button9",0,this->ui->pushButton9);
}


void Widget::setLoadedColor(QString key, int index, QPushButton *button)
{

    auto color = load_color(key);
    this->listColors[index] = color;

    if(color.red() == 0 && color.green() == 0 && color.blue() == 0){ return; }


    QString css = QString("background-color:%1").arg(color.name());
    button->setStyleSheet(css);
}


