#ifndef CONSUMER_H
#define CONSUMER_H


#include <QObject>
#include <QDebug>
#include <QSharedPointer>
#include "test.h"

class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = nullptr);
    ~Consumer();

    QSharedPointer<Test> tester;


signals:

public slots:
};

#endif // CONSUMER_H
