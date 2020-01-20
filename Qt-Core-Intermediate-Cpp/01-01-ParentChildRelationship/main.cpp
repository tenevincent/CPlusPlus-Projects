#include <QCoreApplication>
#include "test.h"
#include "parenttest.h"
#include "qpointermodel.h"
#include <QPointer>
#include "scoopeptrmodel.h"


void mytest(QScopedPointer<ScoopePtrModel> &mypointer);
void useit(ScoopePtrModel* obj);
void doStuff();
void demo_scoope_pointer();


void demo_parent_child(QCoreApplication &a);

void dem_qpointer();


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    {
        //test *t = new test(); // dangling pointer!!!
        QScopedPointer<ScoopePtrModel> scoopePtr(new ScoopePtrModel());
        useit(scoopePtr.data());
        doStuff();

        // demo_scoope_pointer();
    }



    {
        //  dem_qpointer();
    }

    // demo_parent_child(a);

    return a.exec();
}


void demo_scoope_pointer(){

    for(int i = 0; i < 100; i++) {
        doStuff();
    }
    doStuff();
}


void mytest(QScopedPointer<ScoopePtrModel> &mypointer) {
    qInfo() << mypointer.data();
}

void useit(ScoopePtrModel* obj) {
    if(!obj) return;

    qInfo() << "Using" << obj;
}

void doStuff() {

    {
        //test *t = new test(); // dangling pointer!!!
        QScopedPointer<ScoopePtrModel> scoopePtr(new ScoopePtrModel());
        useit(scoopePtr.data());
        mytest(scoopePtr);

        //pointer is automatically deleted!!!
    }
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

    delete ptrOjbect; // the pointer delete here
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

