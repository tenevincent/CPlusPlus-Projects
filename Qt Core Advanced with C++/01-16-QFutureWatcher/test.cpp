
#include "test.h"

TestObject::TestObject(QObject *parent) : QObject(parent)
{
    //Connect
    /*
    void canceled();
    void finished();
    void paused();
    void progressRangeChanged(int minimum, int maximum);
    void progressTextChanged(const QString &progressText);
    void progressValueChanged(int progressValue);
    void resultReadyAt(int index);
    void resultsReadyAt(int beginIndex, int endIndex);
    void resumed();
    void started();
    */

    connect(&watcher, &QFutureWatcher<void>::canceled, this, &TestObject::canceled);
    connect(&watcher, &QFutureWatcher<void>::finished, this, &TestObject::finished);
    connect(&watcher, &QFutureWatcher<void>::paused, this, &TestObject::paused);
    connect(&watcher, &QFutureWatcher<void>::progressRangeChanged, this, &TestObject::progressRangeChanged);
    connect(&watcher, &QFutureWatcher<void>::progressTextChanged, this, &TestObject::progressTextChanged);
    connect(&watcher, &QFutureWatcher<void>::progressValueChanged, this, &TestObject::progressValueChanged);
    connect(&watcher, &QFutureWatcher<void>::resultReadyAt, this, &TestObject::resultReadyAt);
    connect(&watcher, &QFutureWatcher<void>::resumed, this, &TestObject::resumed);
    connect(&watcher, &QFutureWatcher<void>::started, this, &TestObject::started);
}

void TestObject::process()
{
    QMutex mutex;
    mutex.lock();

    list.clear();
    for (int i = 0;i < 100; i++)
    {
        list.append(i);
    }
    mutex.unlock();

    future = QtConcurrent::map(list,&TestObject::multiply);
    watcher.setFuture(future);
}

void TestObject::multiply(int &value)
{
    qInfo() << "Called: " << value;

    value = value * 10;

    //Slow things down
    QThread::currentThread()->msleep(250);
}

void TestObject::canceled()
{
    qInfo() << "Canceled";
}

void TestObject::finished()
{
    qInfo() << "Finished";
    qInfo() << list;
}

void TestObject::paused()
{
    qInfo() << "Paused";
}

void TestObject::progressRangeChanged(int minimum, int maximum)
{
    qInfo() << "Range " << minimum << " to " << maximum;
}

void TestObject::progressTextChanged(const QString &progressText)
{
    qInfo() << "Text: " << progressText;
}

void TestObject::progressValueChanged(int progressValue)
{
    qInfo() << "Progress: " << progressValue;
}

void TestObject::resultReadyAt(int index)
{
    qInfo() << "ReadyAt: " << index;
}

void TestObject::resultsReadyAt(int beginIndex, int endIndex)
{
    qInfo() << "ResultsReadyAt " << beginIndex << " to " << endIndex;
}

void TestObject::resumed()
{
    qInfo() << "Resumed";
}

void TestObject::started()
{
    qInfo() << "Started";
}
