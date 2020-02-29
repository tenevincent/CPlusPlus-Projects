#include <QCoreApplication>
#include <QTimer>
#include <QSharedPointer>
#include "teset.h"



static QSharedPointer<TestObject> sptr;

void timeout()
{
    if(!sptr.isNull())
    {
        qInfo() << "Timeout Stopping Thread";
        sptr.data()->quit();
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestObject thread;
      sptr.reset(&thread);
      thread.start();

      QTimer timer;
      timer.singleShot(5000, &timeout);



    return a.exec();
}
