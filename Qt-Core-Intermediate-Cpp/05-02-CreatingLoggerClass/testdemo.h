#ifndef TESTDEMO_H
#define TESTDEMO_H

#include <QObject>
#include <QDebug>

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);

    void testing();

signals:

public slots:
};

#endif // TESTDEMO_H
