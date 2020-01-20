#include "testshare.h"



TestShare::TestShare(QObject *parent) : QObject(parent)
{
    qInfo() << "Constructed: " << this;
}

TestShare::~TestShare()
{
    qInfo() << "Deconstructed: " << this;
}
