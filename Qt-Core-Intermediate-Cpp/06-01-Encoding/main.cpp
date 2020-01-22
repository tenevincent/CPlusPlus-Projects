#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>

/*
 ASCII is a 7-bit character set containing 128 characters.
 It contains the numbers from 0-9, the upper and lower case English letters from A to Z, and some special characters.
 The character sets used in modern computers, in HTML, and on the Internet, are all based on ASCII.
 http://www.asciitable.com/
 */

QByteArray makeData() {
    QByteArray data;

    // see https://en.wikipedia.org/wiki/ASCII#Printable_characters
    for(int i = 0; i < 10; i++) {
        data.append(72); // ascii H
        data.append(101);
        data.append(108);
        data.append(108);
        data.append(111);
        data.append(33);
        data.append(13); // \r
        data.append(10); // \n

        char byte = data[0];
        qDebug() << "sizeof" << QString::number(sizeof(byte));

        // \r\n
    }
    return data;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QByteArray data = makeData();

    QString path = QDir::currentPath() + QDir::separator() + "data.txt";
    QFile file(path);

    if(file.open(QIODevice::WriteOnly)) {
        file.write(data);
        file.close();
    }

    qInfo() << "Done";

    return a.exec();
}
