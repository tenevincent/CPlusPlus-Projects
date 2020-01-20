#include "parenttest.h"

ParentTest::ParentTest(QObject *parent) : QObject(parent)
{


}

ParentTest::~ParentTest()
{
       qDebug() << this << "ParentTest  Deconstructed";
}
