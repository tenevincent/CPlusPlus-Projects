#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include <QVector>
#include <algorithm>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QStringList list;
    list << "Sven" << "Kim" << "Ola" <<"Alan" << "Debug" << "Zola" << "Fatimata" << "Djemba";


    float aa, bb;
        cin >> aa;
        cin >> bb;
        cout << aa /bb << endl;




    for(auto elem : list)
        qDebug() << elem << ",";


    qDebug() << "------------------------------" ;
    QVector<QString> vect = list.toVector();

    std::sort(vect.begin(), vect.end());

   QList<QString>::iterator elem= std::min_element(list.begin(), list.end());
   qDebug() << *elem << " : min";

   QList<QString>::iterator maxElem = std::max_element(list.begin(), list.end());
   qDebug() << *maxElem << " :max";

   auto minMax = std::minmax_element(list.begin(), list.end());
   qDebug() << *minMax.first << " :min from minmax";
  qDebug() << *minMax.second << " :max from minmax";



    for(auto elem : vect)
        qDebug() << elem << ",";



    return a.exec();
}
