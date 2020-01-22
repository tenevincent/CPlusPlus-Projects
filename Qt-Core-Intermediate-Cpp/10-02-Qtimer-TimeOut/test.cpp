#include "test.h"

TimerTest::TimerTest(QObject *parent) : QObject(parent)
{
    number = 0;
    timer.setInterval(1000);
    connect(&timer,&QTimer::timeout,this, &TimerTest::timeout);
}

void TimerTest::timeout()
{
    number++;
    qInfo() << QTime::currentTime().toString(Qt::DateFormat::SystemLocaleLongDate);
    if(number == 10) {
        timer.stop();
        qInfo() << "Complete!";
    }
}

void TimerTest::startTask()
{
    timer.start();
}
