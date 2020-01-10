#include <QCoreApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);


    QLabel *labelPtr = new QLabel("<b color=red>Hello</b> <i>world</i>");
    labelPtr->show();


    return app.exec();
}
