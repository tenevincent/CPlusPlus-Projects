#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
#include <QFontDialog>
#include <QMessageBox>
#include <QColorDialog>
#include <QInputDialog>

#include <iostream>
#include <fstream>
#include <QString>
#include <string>
#include <QFile>



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
    /* */

    //getExistingDirectory
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "C:\\DevGit\\BlazorProjects",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    qDebug() << "Your chosed dir is : " << dir;


}

QString Widget::readFileContent(QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return "";


    auto byteArray = file.readAll();

    file.close();

    QString content =byteArray;

    return  content;
}

void Widget::handle_read_file_Qt()
{
    /* */
    //getOpenFileName
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "C:/Users/Tene/Downloads",
                                                    tr("Text File (*.txt *.xml *.json)"));


      qDebug() << "Your chosed file is : " << fileName;
    auto fileContent = readFileContent(fileName);

    this->ui->label->setText(fileContent);
    this->ui->label->setToolTip(fileContent);

}

void Widget::handle_read_file_CppStl()
{

    /* */
    //getOpenFileName
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "C:/Users/Tene/Downloads",
                                                    tr("Text File (*.txt *.xml *.json)"));



      qDebug() << "Your chosed file is : " << fileName;
    /*
    */
    using namespace std;
    auto is_file_exists = [](std::string fileName) -> bool{
        std::ifstream infile(fileName);
        return infile.good();
    };




    if(is_file_exists(fileName.toStdString())){
        string textContent;
        ifstream infile;
        QString content("");

        infile.open (fileName.toStdString());
        while(!infile.eof()) // To get you all the lines.
        {
            getline(infile,textContent); // Saves the line in STRING.

            content +=QString::fromStdString(textContent) + "\n";
        }
        infile.close();
        this->ui->label->setText(content);
        this->ui->label->setToolTip(content);
    }

}

void Widget::on_pushButtonOpenFile_clicked()
{


    handle_read_file_Qt();





}

void Widget::on_pushButtonOpenFileMultiple_clicked()
{

    /*  */
    //getOpenFileNames
    QStringList files = QFileDialog::getOpenFileNames(
                this,
                "Select one or more files to open",
                "C:/Users/Tene/Downloads/new_file.png",
                "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
    qDebug() << "Your chosed files are : " << files;


}

void Widget::on_pushButtonSaveFile_clicked()
{

    //getSaveFileName
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                    "C:/Users/Tene/Downloads/new_file.png",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "Your chosen filename is  : " << fileName;
}

void Widget::on_pushButtonFontDialog_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(
                &ok, QFont("Helvetica [Cronyx]", 10), this);
    if (ok) {
        ui->label->setFont(font);

    } else {
        QMessageBox::information(this,"Message","User did not choose font");
    }
}

void Widget::on_pushButtonTextColor_clicked()
{
    QPalette palette = ui->label->palette();

    QColor color = palette.color(QPalette::WindowText);

    QColor chosenColor = QColorDialog::getColor(color,this,"Choose text color");

    if(chosenColor.isValid())
    {
        palette.setColor(QPalette::WindowText,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User choose a valid color";
    }else
    {
        qDebug() << "User choose a invalid color";
    }

}

void Widget::on_pushButtonBackgroundColor_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::Window);
    QColor chosenColor = QColorDialog::getColor(color,this,"Choose text color");

    if(chosenColor.isValid())
    {
        palette.setColor(QPalette::Window,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User choose a valid color";
    }else
    {
        qDebug() << "User choose a invalid color";
    }
}


void Widget::on_pushButtonFontColor_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, QFont("Helvetica [Cronyx]", 10), this);
    if (ok) {
        ui->label->setFont(font);
    } else {

    }
}

void Widget::on_pushButtonInputDialog_clicked()
{
    /*
    bool ok;
    double d = QInputDialog::getDouble(this, tr("QInputDialog::getDouble()"),
                                            tr("Amount:"), 37.56, -10000, 10000, 2, &ok);
    if (ok)
    {
        qDebug() << "Your double value is " << QString::number(d);
    }
    */

    QStringList items;
    items << tr("Spring") << tr("Summer") << tr("Fall") << tr("Winter");

    bool ok;
    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                         tr("Season:"), items, 0, false, &ok);
    if (ok && !item.isEmpty())
    {
        qDebug() << "Your chosen item is "<< item;
    }
}
