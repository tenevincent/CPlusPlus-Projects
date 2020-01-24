#ifndef POOL_H
#define POOL_H

#include <QObject>
#include <QDebug>
#include <QVector>
#include <QTimer>
#include "worker.h"

class Pool : public QObject
{
    Q_OBJECT
public:
    explicit Pool(QObject *parent = nullptr);
    ~Pool();

signals:

public slots:
    void work(int value);
    void started();
    void finished();
    void checkwork();

private:
    QVector<Worker*> m_workers;
    QVector<int> m_work;
    QTimer m_timer;
};

#endif // POOL_H
