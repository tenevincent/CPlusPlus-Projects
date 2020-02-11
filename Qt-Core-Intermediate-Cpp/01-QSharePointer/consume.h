#ifndef CONSUME_H
#define CONSUME_H


#include <QObject>
#include <QDebug>
#include <QSharedPointer>
#include "test.h"
#include <memory>

class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = nullptr);
    ~Consumer();

    std::shared_ptr<TestObject> tester;


signals:

public slots:
};
#endif // CONSUME_H
