#include "teset.h"


TestObject::TestObject(QObject *parent) : QThread(parent)
{

}


void TestObject::quit()
{
    ok = false;
    QThread::quit();
}

void TestObject::run()
{
    ok = true;
    for (int i = 0;i < 1000; i++)
    {
        qInfo() << i;
        this->sleep(1);

        // this is bad because now code become unpredictable
        // control can come from anywhere

        if(!ok) break;
    }

    qInfo() << "Finished";
}
