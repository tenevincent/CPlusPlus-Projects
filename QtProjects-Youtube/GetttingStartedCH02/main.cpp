#include "mainwindow.h"
#include "employeeform.h"
#include <QApplication>
#include <QPushButton>
#include <QString>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

      // MainWindow w;
     // w.show();



     EmployeeForm employeeForm;
employeeForm.show();






    return a.exec();
}
