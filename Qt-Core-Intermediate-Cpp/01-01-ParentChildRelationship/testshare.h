#ifndef TESTSHARE_H
#define TESTSHARE_H

#include <QObject>
#include <QDebug>

class TestShare : public QObject
{
    Q_OBJECT
public:
    explicit TestShare(QObject *parent = nullptr);
    ~TestShare();
signals:

public slots:
};


#endif // TESTSHARE_H
