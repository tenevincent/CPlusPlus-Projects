#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDebug>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_pushButtonOk_clicked()
{

    QString userPos = ui->lineEditPosition->text();
    if(!userPos.isEmpty()){
        this->position = userPos;
    }

    if(ui->radioButtonWindows->isChecked()){
        this->favoriteOs = "Windows";
    }
    else      if(ui->radioButtonMac->isChecked()){
        this->favoriteOs = "Mac";
    }
    else      if(ui->radioButtonLinux->isChecked()){
        this->favoriteOs = "Linux";
    }



    qDebug() << "the user select: " << ui->radioButtonWindows->isChecked();

    this->accept();

}

void InfoDialog::on_pushButtonCancel_clicked()
{

    this->reject();
}

QString InfoDialog::getFavoriteOs() const
{
    return favoriteOs;
}

QString InfoDialog::getPosition() const
{
    return position;
}
