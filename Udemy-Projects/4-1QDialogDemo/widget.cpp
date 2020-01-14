#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
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



void Widget::on_pushButton_clicked()
{
    showDialogModeless();

   // showDialogModally();
}


void Widget::showDialogModally()
{
    InfoDialog *infoDialog = new InfoDialog(this);

    // Show modally
    int resp = infoDialog->exec();
    if(resp == QDialog::Accepted){
        qDebug() << "The dialog was accepted!" ;
        qDebug() << "Position is: " << infoDialog->getPosition() ;
        qDebug() << "Favorite OS is: " << infoDialog->getFavoriteOs() ;

        auto text = "Your position is: " +  infoDialog->getPosition();
        text += "\n your favorite OS is : " +  infoDialog->getFavoriteOs() ;
        ui->labelInfo->setText(text );
    }
    else     if(resp == QDialog::Rejected){
        qDebug() << "The dialog was rejected!" ;
    }
}

void Widget::showDialogModeless()
{
    InfoDialog *infoDialog = new InfoDialog(this);



    connect(infoDialog, & InfoDialog::accept, [=]() {

        qDebug() << "The dialog was accepted!" ;
        qDebug() << "Position is: " << infoDialog->getPosition() ;
        qDebug() << "Favorite OS is: " << infoDialog->getFavoriteOs() ;

        auto text = "Your position is: " +  infoDialog->getPosition();
        text += "\n your favorite OS is : " +  infoDialog->getFavoriteOs() ;
        ui->labelInfo->setText(text );
    });

    connect(infoDialog, & InfoDialog::rejected, [=]() {
        qDebug() << "The dialog was rejected!" ;
    });


    // Show modeless
    infoDialog->show();
    infoDialog->raise();
    infoDialog->activateWindow();
}
