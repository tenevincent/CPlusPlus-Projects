#ifndef WIDGET_H
#define WIDGET_H


#include <QObject>
#include <QDebug>
#include <QTest>

class Widget : public QObject
{
    Q_OBJECT
public:
    explicit Widget(QObject *parent = nullptr);

signals:

public slots:

private slots:
    void testAge_data();
    void testAge();


};


#endif // WIDGET_H
