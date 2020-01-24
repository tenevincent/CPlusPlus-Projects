
#include "worker.h"

Worker::Worker(QObject *parent) : QObject(parent)
{

}

bool Worker::isBusy()
{
    return m_busy;
}

void Worker::timeout()
{
    m_busy = false;
    emit finished();
}

void Worker::work(int value)
{
    m_busy = true;
    qInfo() << "Starting work: " << QString::number(value);
    int num = QRandomGenerator::global()->bounded(1000,5000);
    m_timer.singleShot(num,this,&Worker::timeout);

    emit started();
}
