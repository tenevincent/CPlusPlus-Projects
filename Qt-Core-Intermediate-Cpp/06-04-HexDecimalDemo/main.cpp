#include <QCoreApplication>
#include <QDebug>
#include <QRandomGenerator>

/*
 HEX
*/

QString makeData() {
    QString data;
    for(int i = 0; i < 10; i++) {

        int number = QRandomGenerator::global()->bounded(1112064);
        data.append(number);
       // data.append("Hello\r\n");
    }
    return  data;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = makeData();
    QByteArray bytes(data.toUtf8());
    QByteArray encoded = bytes.toHex();
    QByteArray decoded = QByteArray::fromHex(encoded);

    qInfo() << "Encoded:" << encoded;
    qInfo(" --------------------------------------- ");
    qInfo() << "Decoded:" << decoded;

    QString utf8String(decoded);

     qInfo() << "Decoded UTF-8: " << utf8String;

    return a.exec();
}
