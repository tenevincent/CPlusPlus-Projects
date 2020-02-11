#ifndef TEST_H
#define TEST_H
#include <QObject>
#include <QDebug>

class TestObject : public QObject
{
    Q_OBJECT
public:
    explicit TestObject(QObject *parent = nullptr);
    ~TestObject();
signals:

public slots:
};
#endif // TEST_H
