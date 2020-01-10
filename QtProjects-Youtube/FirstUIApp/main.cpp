#include "mainwindow.h"

#include <QApplication>
#include <QIcon>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


  // MainWindow w;
  //   w.show();


     QPushButton myButton(QIcon("Resources/paste.png"),"Push Me");
       myButton.setToolTip("Click this to turn back the hands of time");
       myButton.show();


  //   QLabel *labelPtr = new QLabel("<b style=color:red>Hello</b> <i>world</i>");
  //  labelPtr->show();


    return a.exec();
}
