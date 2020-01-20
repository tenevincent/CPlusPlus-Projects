#ifndef QPOINTERMODEL_H
#define QPOINTERMODEL_H

#include <QObject>
#include <QDebug>
#include <QObject>
#include <QPointer>



class QPointerModel : public QObject
{
    Q_OBJECT
public:
    explicit QPointerModel(QObject *parent = nullptr);
    QPointer<QObject> widget;

    void useWidet();



signals:

};

#endif // QPOINTERMODEL_H
