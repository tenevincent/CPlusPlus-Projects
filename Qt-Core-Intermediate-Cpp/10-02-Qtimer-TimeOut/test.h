#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QTime>

class TimerTest : public QObject
{
    Q_OBJECT
public:
    explicit TimerTest(QObject *parent = nullptr);


signals:

    public
    slots:
    void timeout();

public:
    void startTask();

private:
    QTimer timer;
    int number;
};
#endif // TEST_H
