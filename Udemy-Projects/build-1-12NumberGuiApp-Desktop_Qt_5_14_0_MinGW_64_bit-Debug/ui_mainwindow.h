/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButtonGuess;
    QPushButton *pushButtonStartOver;
    QLabel *labelMessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 151, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(70, 80, 151, 31));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        pushButtonGuess = new QPushButton(centralwidget);
        pushButtonGuess->setObjectName(QString::fromUtf8("pushButtonGuess"));
        pushButtonGuess->setGeometry(QRect(244, 80, 81, 31));
        pushButtonStartOver = new QPushButton(centralwidget);
        pushButtonStartOver->setObjectName(QString::fromUtf8("pushButtonStartOver"));
        pushButtonStartOver->setGeometry(QRect(354, 80, 81, 31));
        labelMessage = new QLabel(centralwidget);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setGeometry(QRect(80, 130, 201, 31));
        QFont font1;
        font1.setPointSize(15);
        labelMessage->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Guess my number", nullptr));
        pushButtonGuess->setText(QCoreApplication::translate("MainWindow", "Guess", nullptr));
        pushButtonStartOver->setText(QCoreApplication::translate("MainWindow", "Start Over", nullptr));
        labelMessage->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
