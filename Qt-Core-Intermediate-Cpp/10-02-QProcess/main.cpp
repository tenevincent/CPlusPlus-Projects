#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QProcess>

bool TimerTest() {
    QProcess gzip;
    gzip.start("gzip", QStringList() << "-c");

    if(!gzip.waitForStarted()) return false;

    gzip.write("Qt rocks!");
    gzip.closeWriteChannel();

    if(!gzip.waitForFinished()) return false;
    QByteArray result = gzip.readAll();
    qInfo() << "Result: " << result;

    return true;

}





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    if(TimerTest()) {
        qInfo() << "Compressed with gzip!";
    } else {
        qInfo() << "Failed to use gzip";
    }



    {
        qInfo() << "Starting...";
        QProcess proc;
        proc.execute("xed",QStringList() << "http://www.voidrealms.com");
        qInfo() << "Exit code: " << proc.exitCode();
    }





    return a.exec();
}
