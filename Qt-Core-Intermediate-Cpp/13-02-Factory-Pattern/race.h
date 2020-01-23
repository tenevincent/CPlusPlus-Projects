#ifndef RACE_H
#define RACE_H

#include <QObject>
#include <QDebug>
#include "car.h"

class RaceCar : public Car
{
    Q_OBJECT
public:
    explicit RaceCar(QObject *parent = nullptr);

signals:

public slots:

    // car interface
public:
    void drive();
};

#endif // RACE_H
