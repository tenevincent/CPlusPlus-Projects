#include <QCoreApplication>
#include <QDebug>
#include <QList>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> myList;

    // insert data
    myList.push_back("one");
    myList << "two" << "three" << "four";

    myList.push_back("five");

    qDebug() << myList[0] << endl;


    for (auto it = myList.begin(); it!= myList.end() ; it++) {
        qDebug() << *it << endl;
    }

    qDebug() << "" << endl;
    qDebug() << "" << endl;


    // Accessing list
    for (auto elem : myList) {
        qDebug() << elem << endl;
    }

    qDebug() << "QList demo..." << endl;

    return a.exec();
}
