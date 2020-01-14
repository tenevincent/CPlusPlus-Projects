/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton01;
    QPushButton *pushButton04;
    QPushButton *pushButton07;
    QPushButton *pushButton02;
    QPushButton *pushButton05;
    QPushButton *pushButton03;
    QPushButton *pushButton09;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton01 = new QPushButton(Widget);
        pushButton01->setObjectName(QString::fromUtf8("pushButton01"));
        pushButton01->setGeometry(QRect(120, 50, 75, 23));
        pushButton04 = new QPushButton(Widget);
        pushButton04->setObjectName(QString::fromUtf8("pushButton04"));
        pushButton04->setGeometry(QRect(130, 90, 75, 23));
        pushButton07 = new QPushButton(Widget);
        pushButton07->setObjectName(QString::fromUtf8("pushButton07"));
        pushButton07->setGeometry(QRect(130, 130, 75, 23));
        pushButton02 = new QPushButton(Widget);
        pushButton02->setObjectName(QString::fromUtf8("pushButton02"));
        pushButton02->setGeometry(QRect(250, 60, 75, 23));
        pushButton05 = new QPushButton(Widget);
        pushButton05->setObjectName(QString::fromUtf8("pushButton05"));
        pushButton05->setGeometry(QRect(250, 100, 75, 23));
        pushButton03 = new QPushButton(Widget);
        pushButton03->setObjectName(QString::fromUtf8("pushButton03"));
        pushButton03->setGeometry(QRect(380, 50, 75, 23));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton03->sizePolicy().hasHeightForWidth());
        pushButton03->setSizePolicy(sizePolicy);
        pushButton09 = new QPushButton(Widget);
        pushButton09->setObjectName(QString::fromUtf8("pushButton09"));
        pushButton09->setGeometry(QRect(350, 150, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton01->setText(QCoreApplication::translate("Widget", "One", nullptr));
        pushButton04->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        pushButton07->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        pushButton02->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        pushButton05->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        pushButton03->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        pushButton09->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
