#ifndef TEST_H
#define TEST_H
#include <QDebug>
#include <QObject>


class Test  : public QObject
{


    Q_OBJECT

public:

    explicit Test(QObject *parent = nullptr);
     ~Test();

     void makeChild(QString name);

};

#endif // TEST_H
