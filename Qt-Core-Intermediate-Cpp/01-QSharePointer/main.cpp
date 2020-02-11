#include <QCoreApplication>

#include <QDebug>
#include <QSharedPointer>
#include "test.h"
#include "consume.h"
#include <memory>

//QSharedPointer will delete the pointer it is holding when it goes out of scope,
//provided no other QSharedPointer objects are referencing it.


void doDeleteLater(TestObject *obj) {
    qInfo() << "Deleting: " << obj;
    obj->deleteLater();
}

std::shared_ptr<TestObject> createPointer() {
    TestObject *t = new TestObject(); // the bad way!!!
    t->setObjectName("Test Object");
    std::shared_ptr<TestObject> p(t); //&QObject::deleteLater
    return p;
}

void doStuff(std::shared_ptr<Consumer>  ptr) {
    //qInfo() << "In function: " << ptr.data()->tester;

     qInfo() << "In function: " << ptr->tester.get();

    // ptr.clear(); //Does not actually delete!, just removes the reference
}


std::shared_ptr<Consumer> makeConsumer() {
    std::shared_ptr<Consumer> c(new Consumer);
    std::shared_ptr<TestObject> t = createPointer();

    c->tester.swap(t);

   // c.data()->tester.swap(t);
    doStuff(c);

    return c;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    {
        std::shared_ptr<Consumer> consume = makeConsumer();
        qInfo() << "In main: " << consume->tester.get();
        //consume.clear(); //Does not actually delete!, just removes the reference

    }


    return a.exec();
}
