#include <QCoreApplication>
#include <QDebug>
#include <QString>



void show_QString_Demo();


void show_QStringList_Demo();



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    show_QStringList_Demo();


    // show_QString_Demo();



    return a.exec();
}



void show_QStringList_Demo(){




}

void show_QString_Demo()
{
    QString str = "Hello# Welcome to your first Qt App # Vincent De Paul # Qt Specialist";
    qDebug() << "Ausgabe: " << str;
    qDebug() << "Ausgabe 02: " << str.toUpper();

    QStringList splitString = str.split('#');
    qDebug() << "Length of splits: " << splitString.length();

    for (auto elem : splitString) {
           qDebug() << "Current elem: " << elem ;
    }

    qDebug() << "Contains W " << str.split('#');

    bool  isSuccess = false;
    QString strNumber = "33";
    int number = strNumber.toInt(&isSuccess);
    qDebug() << "Number: " << number;

    qDebug() << "Is Success: " << isSuccess;

    static const QChar data[4] = { 0x0055, 0x006e, 0x10e3, 0x03a3 };
    qDebug() << "Ausgabe: " << data;


    QString str2(data, 4);
    qDebug() << "Ausgabe: " << str2;

    QChar ch ='C';
    QString newStr(ch);





}
