#ifndef TEST_H
#define TEST_H
#include <QObject>
#include <QObject>
#include "singleton.h"


class TestClass : public QObject
{
    Q_OBJECT
    static TestClass *createInstance();

public:
    explicit TestClass(QObject *parent = nullptr);

    QString name;
    static TestClass* instance();

signals:

public slots:
};
#endif // TEST_H
