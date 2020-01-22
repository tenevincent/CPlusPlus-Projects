#include "qpointermodel.h"

QPointerModel::QPointerModel(QObject *parent) : QObject(parent)
{

}

void QPointerModel::useWidet()
{

// se if there is a pointer
    if(!widget.data()){
        qInfo() << "No pointer!!";
        return;
    }

    qInfo() << "Widget = " << widget.data();
    // Access the pointer
    widget.data()->setObjectName("Used widget");

}
