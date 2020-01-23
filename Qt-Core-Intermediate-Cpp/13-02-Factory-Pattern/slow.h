#ifndef SLOW_H
#define SLOW_H

#include <QObject>
#include <QDebug>
#include "car.h"

class SlowCar : public Car
{
    Q_OBJECT
public:
    explicit SlowCar(QObject *parent = nullptr);

signals:

public slots:

    // car interface
public:
    void drive();
};

#endif // SLOW_H
