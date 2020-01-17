#include "widget.h"
#include "ui_widget.h"
#include <QNetworkReply>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    netManager =  new QNetworkAccessManager(this);
    netReply = nullptr;
    mDataBuffer = new QByteArray();


}

Widget::~Widget()
{
    delete ui;
}





void Widget::on_pushButton_clicked()
{


    //Define net request5
    QNetworkRequest request;
    request.setUrl(QUrl("http://www.cameroon-info.net/"));

    netReply = netManager->get(request);
    connect(netReply,&QIODevice::readyRead,this,&Widget::dataReadyToRead);
    connect(netReply,&QNetworkReply::finished,this,&Widget::dataReadFinished);

}

void Widget::dataReadyToRead()
{
    qDebug()<< "Some data available";
    mDataBuffer->append(netReply->readAll());
}






void Widget::dataReadFinished()
{
    if( netReply->error())
    {
        qDebug() << " Error : " << QString(*mDataBuffer) ;
    }else
    {
        ui->textEdit->setPlainText(QString(*mDataBuffer));
    }

}

