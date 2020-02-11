#include "test.h"


TestObject::TestObject(QObject *parent) : QObject(parent)
{
 qInfo() << "Constructed" << this;
}


TestObject::~TestObject()
{
    qInfo() << "Deconstructed" << this;
}


void TestObject::useWidget()
{
    //see if there is a pointer!

    if(!widget.data()) {

        qInfo() << "No Pointer!!!";
        return;
    }

    qInfo() << "Widget = " << widget.data();

    //Access the pointer
    widget.data()->setObjectName("used Widget!");
}
