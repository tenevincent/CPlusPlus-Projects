#ifndef CONSUMER_H
#define CONSUMER_H


#include <QObject>
#include <QDebug>
#include <QSharedPointer>
#include "testshare.h"

class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = nullptr);
    ~Consumer();

    QSharedPointer<TestShare> tester;


signals:

public slots:
};

#endif // CONSUMER_H
