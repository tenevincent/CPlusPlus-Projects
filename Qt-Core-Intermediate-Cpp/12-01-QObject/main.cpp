#include <QCoreApplication>
#include <QObject>
#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaClassInfo>
#include <QTimer>
#include "test.h"
#include "employee.h"




void demo_Qobject(){
    QObject parent;
    QTimer *timer = new QTimer(&parent);

    //make some children
    for(int i = 0; i < 5; i++) {
        TestClass *t = new TestClass(&parent);


        t->setObjectName("Child: " + QString::number(i));
    }

    foreach(QObject *c, parent.children()) {
        qInfo() << c;

        qInfo() <<"Class name: " << c->metaObject()->className();
        qInfo() << "Inherits: " << c->inherits("test");

        for(int m = 0; m < c->metaObject()->methodCount(); m++) {
            qInfo() << "Method: " << c->metaObject()->method(m).methodSignature();
        }

        qInfo() << "---------------------------------------------------";
        for(int m = 0; m < c->metaObject()->propertyCount(); m++){
            qInfo() << "Property: " << c->metaObject()->property(m).name();
        }
        qInfo("");
    }
    qInfo() << "---------------------------------------------------";
}

void listProperties(QObject *obj) {
    for(int i = 0; i < obj->metaObject()->propertyCount(); i++) {
        QMetaProperty p = obj->metaObject()->property(i);
        qInfo() << "Property: " << p.name() << " is a " << p.typeName();
    }
}


void listMethods(QObject *obj) {
    for(int i = 0; i < obj->metaObject()->methodCount(); i++) {
        QMetaMethod m = obj->metaObject()->method(i);
        qInfo() << "Method: " << m.methodSignature();
    }
}

void listChildren(QObject *obj) {
    qInfo() << "Object: " << obj;

    foreach(QObject *child,obj->children()){
        qInfo() << child;
        listMethods(child);
        listProperties(child);
        qInfo("");
    }
}


void testProp(QObject *parent, QString name, QVariant value) {
    foreach(QObject *child, parent->children()) {
        child->setProperty(name.toLatin1(), value);
    }
}


void listClassInfo(QObject *obj) {
    qInfo() << obj->metaObject()->className();
    for(int i = 0; i < obj->metaObject()->classInfoCount(); i++) {
        QMetaClassInfo c = obj->metaObject()->classInfo(i);
        qInfo() << "Property: " << c.name() << " = " << c.value();
    }
}



void demo_QMetaObject(){
    QObject parent;
    QTimer *t = new QTimer(&parent);

    for(int i = 0; i < 5; i++) {
        TestClass *child = new TestClass(&parent);
        child->setObjectName("Child " + QString::number(i));
    }

    testProp(&parent, "interval", 3000);

    listChildren(&parent);

    qInfo()<< "timer interval: " << t->interval();
}


void demo_class_info(){
    TestClass t;
    listClassInfo(&t);
}



void pointerTest(QObject *o) {
    qInfo() << o;
}

void referenceTest(QObject &o) {
    qInfo() << &o;
}

void copyTest(QObject o) {
    qInfo() << &o;
}


void demo_disable_copy(){
    TestClass t;
    pointerTest(&t);
    referenceTest(t);
    // copyTest(t);
}


void display(Employee obj) {
    qDebug() << "Length of line : " << obj.getLength() <<endl;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Employee line(10);

    display(line);

    //demo_Qobject();


    // demo_QMetaObject();

    // demo_class_info();

    demo_disable_copy();


    return a.exec();
}
