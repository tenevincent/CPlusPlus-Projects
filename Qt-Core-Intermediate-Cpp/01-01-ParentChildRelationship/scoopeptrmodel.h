#ifndef SCOOPEPTRMODEL_H
#define SCOOPEPTRMODEL_H
#include <QObject>
#include <QDebug>


class ScoopePtrModel : public QObject
{
    Q_OBJECT
public:
    explicit ScoopePtrModel(QObject *parent = nullptr);
    ~ScoopePtrModel();
signals:

public slots:
};

#endif // SCOOPEPTRMODEL_H

