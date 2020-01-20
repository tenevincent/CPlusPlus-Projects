#include "scoopeptrmodel.h"

ScoopePtrModel::ScoopePtrModel(QObject *parent) : QObject(parent)
{
    qInfo() << "Constructed" << this;
}

ScoopePtrModel::~ScoopePtrModel()
{
    qInfo() << "Deconstructed" << this;
}
