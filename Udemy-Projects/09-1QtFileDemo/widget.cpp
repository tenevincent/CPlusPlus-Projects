#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>




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


void Widget::on_pushButtonWrite_clicked()
{

    // Save to the file
    QString fileName = QFileDialog::getSaveFileName(this,"Save as");

    if(fileName.isEmpty()) return;

    QFile file(fileName);



    if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append )){
        return;
    }

    // Read the content
    QTextStream textStream(&file);
    textStream << ui->plainTextEdit->toPlainText() << "\n";
    // close the file
    file.close();


}

void Widget::on_pushButtonRead_clicked()
{

    QString fileContent("");
     QString fileName = QFileDialog::getOpenFileName(this,"Open File");

     if(fileName.isEmpty()) return;

      QFile file(fileName);

     if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
         return;
     }

      QTextStream textStream(&file);

      QString line = textStream.readLine();
      while (!line.isNull()) {
          fileContent.append(line);
          line = textStream.readLine();
      }

      file.close();

      ui->plainTextEdit->clear();
      ui->plainTextEdit->setPlainText(fileContent);


}

void Widget::on_pushButtonSelectFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open File");

    if(fileName.isEmpty()) {return; }

    ui->lineEditSource->setText(fileName);


}

void Widget::on_pushButtonCopy_clicked()
{
     QString fileNameSource = ui->lineEditSource->text();
     QString fileNameDestination = ui->lineEditDestination->text();

       if(fileNameSource.isEmpty() || fileNameDestination.isEmpty() ) {return; }

       QFile file(fileNameSource);
       if(file.copy(fileNameDestination)){
           QMessageBox::information(this,"Success", "Copy successfully");
       }
       else{
           QMessageBox::information(this,"Failure", "Copy failed");
       }



}
