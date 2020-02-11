
#include "consume.h"

Consumer::Consumer(QObject *parent) : QObject(parent)
{
    qInfo() << "Constructed: " << this;
}

Consumer::~Consumer()
{
    qInfo() << "Deconstructed: " << this;
}
