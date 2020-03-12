#ifndef MANAGER_H
#define MANAGER_H


#include <memory>
#include <QObject>
#include <QDebug>
#include <QThread>
#include "counter.h"

class Manager : public QObject
{
    Q_OBJECT
public:
    explicit Manager(QObject *parent = nullptr);
    void start();

signals:

public slots:
    void started();
    void finished();

private:
    QList<std::shared_ptr<QThread>> threads;
};
#endif // MANAGER_H
