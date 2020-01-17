#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    QString path = "C:/";

    // Directory model
    directoryModel = new QFileSystemModel(this);
    directoryModel->setFilter(QDir::NoDotAndDotDot | QDir::Dirs| QDir::Files) ;
    auto parentIndex = directoryModel->setRootPath(path);

    ui->treeView->setModel(directoryModel);

    // File system model
    fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    fileSystemModel->setRootPath(path); // Require for model to load file system info

    ui->listView->setModel(fileSystemModel);


     updateSelectedDirectory(parentIndex);
}




Widget::~Widget()
{
    delete ui;
}


void Widget::updateSelectedDirectory(const QModelIndex &index)
{
    QString path = directoryModel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(fileSystemModel->setRootPath(path));

     qDebug() << "User clicks on " << path;
}

void Widget::on_treeView_clicked(const QModelIndex &index)
{


    updateSelectedDirectory(index);


}
