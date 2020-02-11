#ifndef TEST_H
#define TEST_H



#include <QObject>
#include <QDebug>
#include <QPointer>

class TestObject : public QObject
{
    Q_OBJECT
public:
    explicit TestObject(QObject *parent = nullptr);
     ~TestObject();

    QPointer<QObject> widget;

    void useWidget();

signals:

public slots:
};
#endif // TEST_H
