#include "widget.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>


QString readTextFile(QString path);


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;



    QString css = readTextFile("://Resources/style.css");
    if( css.length() > 0)
    {
        a.setStyleSheet(css);
    }


    w.show();
    return a.exec();
}


QString readTextFile(QString path)
{
    QFile file(path);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        return in.readAll();
    }

    return "";
}
