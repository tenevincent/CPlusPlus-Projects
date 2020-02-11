#include <QCoreApplication>
#include "test.h"

void demo_QPointer();
void demo_ScopePointer();

void mytest(QScopedPointer<TestObject> &mypointer) {
    qInfo() << mypointer.data();
}

void useit(QScopedPointer<TestObject> &obj) {
    if(obj) return;

    qInfo() << "Using: " << obj;
}

void doStuff() {
    //test *t = new test(); // dangling pointer!!!
    QScopedPointer<TestObject> mypointer(new TestObject());

    useit(mypointer);
    mytest(mypointer);

    //pointer is automatically deleted!!!
}



int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    demo_ScopePointer();
    // demo_QPointer();
    return a.exec();
}

void demo_ScopePointer()
{

    for(int i = 0; i < 4; i++) {
           doStuff();
       }
       doStuff();

}

void demo_QPointer()
{
    QObject *obj = new QObject(nullptr);
    obj->setObjectName("My Object");

    QPointer<QObject> p(obj);

    TestObject t;
    t.widget = p;
    t.useWidget();

    if(p.data()) qInfo() << p.data();

    delete  obj;
    t.useWidget();
}


