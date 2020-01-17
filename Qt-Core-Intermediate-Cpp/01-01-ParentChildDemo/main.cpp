#include <QCoreApplication>
#include "test.h"
#include "parenttest.h"
#include "qpointermodel.h"
#include <QPointer>


void demo_parent_child(QCoreApplication &a);

void dem_qpointer();


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    {
        dem_qpointer();


    }

    // demo_parent_child(a);



    return a.exec();
}

void dem_qpointer()
{
    QObject *ptrOjbect = new QObject(nullptr);
    ptrOjbect->setObjectName("My object name");

    QPointer<QObject> pointer(ptrOjbect);

    QPointerModel test;
    test.widget = pointer;
    test.useWidet();

    if(pointer.data()){
        qInfo() << pointer.data();
    }
    delete ptrOjbect;
    test.useWidet();
}




void demo_parent_child(QCoreApplication &a)
{
    {
        ParentTest *parentTest = new ParentTest(&a);
        {
            Test *p = new Test(parentTest); // should have a parent &a
            p->setObjectName("parent");

            for(int i = 0; i < 5; i++) {
                p->makeChild(QString::number(i));
            }
        }
        delete   parentTest ;
    }
}

