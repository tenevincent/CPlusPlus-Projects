#include <QCoreApplication>
#include <QIODevice>
#include <QDir>
#include <QFile>
#include <QString>
#include <QByteArray>
#include <QDebug>

bool putToFile(QString path, QByteArray data, QIODevice::OpenMode mode) {
    QFile file(path);

    if(!file.open(mode)) {
        qWarning() << file.errorString();
        return false;
    }

    qint64 bytes = file.write(data);
    if(!bytes) {
        qWarning() << file.errorString();
    } else {
        qInfo() << "Wrote " << bytes << " to the file!";
    }

    file.flush(); // not really needed
    file.close();

    return true;
}

void writeToFile(QString path, QByteArray data) {
    qInfo() << "Write to file";
    if(putToFile(path,data,QIODevice::WriteOnly)) {
        qInfo() << "Data written to file";
    } else {
        qWarning() << "Failed to write to file!";
    }
}

void appendToFile(QString path, QByteArray data) {
    qInfo() << "Write to file";
    if(putToFile(path,data,QIODevice::Append)) {
        qInfo() << "Data written to file";
    } else {
        qWarning() << "Failed to write to file!";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path = QDir::currentPath() + QDir::separator() + "test.txt";
    qInfo() << "Path: " << path;

    QByteArray data("Hello World!\r\n");

    for(int i = 0; i < 5; i++) {
        QString num = QString::number(i);
        num.append(" ");

        QByteArray line(num.toLatin1() + data);
        //write(path,line);
        appendToFile(path,line);
    }

    return a.exec();
}

