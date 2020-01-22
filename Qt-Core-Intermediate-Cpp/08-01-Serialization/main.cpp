#include <QCoreApplication>
#include <QDebug>
#include <QDataStream>
#include <QFile>


bool saveFile(QString path) {
    QFile file(path);

    if(!file.open(QIODevice::WriteOnly)) return false;

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_11);

     qInfo() << "version out: " << out.version();

    QString title = "The answer is 42";
    qint64 num = 42;

    out << title;
    out << num;

    file.flush();
    file.close();

    return true;
}

bool readFile(QString path) {
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) return false;

    QDataStream in(&file);

    qInfo() << "version in: " << in.version();


    if(in.version() != QDataStream::Qt_5_11) {
        qCritical() << "Bad version!";
       // file.close();
       // return false;
    }

    QString title;
    qint64 num;


    in >> title;
    in >> num;

    qInfo() << title;
    qInfo() << num;

    file.close();

    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString file = "test.txt";

    if(saveFile(file)){
        qInfo() << "File saved!..." ;
        // read the file here
        readFile(file);
    }

    return a.exec();
}
