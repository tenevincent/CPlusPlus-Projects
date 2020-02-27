#ifndef LAPTOP_H
#define LAPTOP_H


#include <QObject>
#include <QDebug>

class Laptop : public QObject
{
    Q_OBJECT
public:

    //Constructor
    explicit Laptop(QObject *parent = nullptr, QString name = "");

    //Deconstructor
    ~Laptop();

    int weight;
    QString name;
    double asKilograms();
    void test();


signals:

public slots:
};

#endif // LAPTOP_H
