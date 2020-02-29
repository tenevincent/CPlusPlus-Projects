#ifndef TESET_H
#define TESET_H



#include <QObject>
#include <QThread>
#include <QDebug>

class TestObject : public QThread
{
    Q_OBJECT
public:
    explicit TestObject(QObject *parent = nullptr);

signals:

public slots:
    void quit();

protected:
    void run();

private:
    bool ok;
};
#endif // TESET_H
