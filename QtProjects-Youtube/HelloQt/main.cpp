#include <QCoreApplication>
#include <QDebug>
#include <QLabel>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);






    QString helloworld = "Hello Qt world";
    qDebug() << "Hello Qt" << endl ;
      qDebug() << helloworld << endl ;

    return a.exec();
}
