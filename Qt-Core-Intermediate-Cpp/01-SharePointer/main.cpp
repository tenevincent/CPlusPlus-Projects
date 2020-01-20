#include <QCoreApplication>
#include <QDebug>
#include <QSharedPointer>
#include "test.h"
#include "consumer.h"


void doDeleteLater(Test *obj);
QSharedPointer<Test> createPointer();
void doStuff(QSharedPointer<Consumer> ptr);

QSharedPointer<Consumer> makeConsumer();





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    {
        {
            QSharedPointer<Consumer> consume = makeConsumer();
            qInfo() << "In main: " << consume.data()->tester;
            consume.clear(); //Does not actually delete!, just removes the reference
        }
    }



    return a.exec();
}


void doDeleteLater(Test *obj) {
    qInfo() << "Deleting: " << obj;
    obj->deleteLater();
}


QSharedPointer<Test> createPointer() {
    Test *t = new Test(); // the bad way!!!
    t->setObjectName("Test Object");
    QSharedPointer<Test> p(t); //&QObject::deleteLater
    return p;
}

void doStuff(QSharedPointer<Consumer> ptr) {
    qInfo() << "In function: " << ptr.data()->tester;
    ptr.clear(); //Does not actually delete!, just removes the reference
}


QSharedPointer<Consumer> makeConsumer() {
    QSharedPointer<Consumer> consumer(new Consumer);
    QSharedPointer<Test> test = createPointer();

    if(!consumer){
        qInfo() << "The pointer is null... " ;
    }


    consumer.data()->tester.swap(test);
    doStuff(consumer);

    return consumer;
}


