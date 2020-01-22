#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QString>


const QtMessageHandler QT_DEFAULT_MESSAGE_HANDLER = qInstallMessageHandler(nullptr);

void lhandler(QtMsgType type, const QMessageLogContext &context, const QString &msg) {


    QString fileName = "log.txt";

    QString file_info("log_info.txt");
    QString file_warning("log_warning.txt");
    QString file_error("log_error.txt");
    QString file_debug("log_debug.txt");
    QString file_critical("log_critical.txt");
    QString file_fatal("log_fatal.txt");


    QString txt;
    switch (type) {
    case QtInfoMsg:
        txt = QString("Info: %1 in %2").arg(msg);
        fileName = file_info;
        break;
    case QtDebugMsg:
        txt = QString("Debug: %1").arg(msg);
        fileName = file_debug;
        break;
    case QtWarningMsg:
        txt = QString("Warning: %1").arg(msg);
        fileName = file_warning;
        break;
    case QtCriticalMsg:
        txt = QString("Critical: %1").arg(msg);
        fileName = file_critical;
        break;
    case QtFatalMsg:
        txt = QString("Fatal: %1").arg(msg);
        fileName = file_fatal;
        break;
    }

    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream ts(&file);
        ts << QDateTime::currentDateTime().toString() << " - " << txt << " file: " << context.file << " line: " << context.line << "\r\n";
        ts.flush();
        file.close();
    }

    (*QT_DEFAULT_MESSAGE_HANDLER)(type, context, msg);

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInstallMessageHandler(lhandler);

    qInfo() << "This is a info message";
    qDebug() << "This is a debug message";
    qWarning() << "This is a warning message";
    qCritical() << "This is a critical message";
    qFatal("THIS IS SPARTA!!!");



    return a.exec();
}
