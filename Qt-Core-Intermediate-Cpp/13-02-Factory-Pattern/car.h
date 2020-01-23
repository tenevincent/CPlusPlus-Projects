#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QMetaEnum>
#include <QDebug>

class Car : public QObject
{
    Q_OBJECT
public:
    enum Model{SLOWCAR,SPORTSCAR,RACECAR};
    Q_ENUM(Model);

    explicit Car(QObject *parent = nullptr);
    static Car* make(Model model);
    virtual void drive() = 0;
signals:

public slots:
};

#endif // CAR_H
