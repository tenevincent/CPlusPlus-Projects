#include <QCoreApplication>
#include <QStringList>
#include <QtAlgorithms>
#include <QDebug>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    {
        QStringList list;
        list << "one" << "two" << "three";

        std::fill(list.begin(), list.end(), "eleven");
        // list: [ "eleven", "eleven", "eleven" ]
        for (auto item : list) {
            qDebug() << item;
        }

        std::fill(list.begin() + 1, list.end(), "six");
        // list: [ "eleven", "six", "six" ]
        for (auto item : list) {
            qDebug() << item;
        }
    }


    {
        QList<int> list;
        list << 33 << 12 << 68 << 6 << 12 << 0 << 333 << 33<<124;
        std::sort(list.begin(), list.end(), std::less<int>());
        for (auto item : list) {
            qDebug() << "sorted item: " << item;
        }
    }


    {
        QStringList list;
        list << "one" << "two" << "three";

        QVector<QString> vect(3);
        vect[0] = "one";
        vect[1] = "two";
        vect[2] = "three";

        bool ret1 = std::equal(list.begin(), list.end(), vect.begin());
        // ret1 == true
        qDebug() << "is equals(1): " << ret1;


        vect[2] = "seven";
        bool ret2 = std::equal(list.begin(), list.end(), vect.begin());
        // ret2 == false
        qDebug() << "is equals(2): " << ret2;


    }


    return a.exec();
}
