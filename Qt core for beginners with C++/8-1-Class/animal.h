#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>



class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = nullptr);

signals:

public:
    void speak(QString message);


public slots:
};

#endif // ANIMAL_H
