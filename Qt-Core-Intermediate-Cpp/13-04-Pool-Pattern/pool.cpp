
#include "pool.h"


Pool::Pool(QObject *parent) : QObject(parent)
{
    for(int i = 0; i < 5; i++) {
        Worker *worker = new Worker(this);
        worker->setObjectName("Worker: " + QString::number(i));
        connect(worker,&Worker::started,this, &Pool::started);
        connect(worker,&Worker::finished,this, &Pool::finished);

        m_workers.append(worker);
        qInfo() << "Worker ready: " << worker->objectName();
    }

    connect(&m_timer,&QTimer::timeout,this, &Pool::checkwork);
    m_timer.setInterval(200);
    m_timer.start();
}

Pool::~Pool()
{
    m_timer.stop();
    qDeleteAll(m_workers);
    m_workers.clear();
}

void Pool::work(int value)
{
    m_work.append(value);
    checkwork();
}

void Pool::started()
{
    Worker *w = qobject_cast<Worker*>(sender());
    qInfo() << "Started: " << w->objectName();
}

void Pool::finished()
{
    Worker *w = qobject_cast<Worker*>(sender());
    qInfo() << "Finished: " << w->objectName();
}

void Pool::checkwork()
{
    if(m_work.isEmpty()) return;
    foreach(Worker *worker, m_workers) {
        if(!worker->isBusy()) {
            worker->work(m_work.takeFirst());
            if(m_work.isEmpty()) return;
        }
    }
}
