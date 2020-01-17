#ifndef PARENTTEST_H
#define PARENTTEST_H
#include <QDebug>
#include <QObject>


class ParentTest  : public QObject
{

    Q_OBJECT


public:
    explicit ParentTest(QObject *parent = nullptr);
    ~ParentTest();

};

#endif // PARENTTEST_H
