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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonOne;
    QPushButton *pushButtoTwo;
    QPushButton *pushButtonThree;
    QPushButton *pushButtonFour;
    QPushButton *pushButtonFive;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonOne = new QPushButton(Widget);
        pushButtonOne->setObjectName(QString::fromUtf8("pushButtonOne"));

        horizontalLayout->addWidget(pushButtonOne);

        pushButtoTwo = new QPushButton(Widget);
        pushButtoTwo->setObjectName(QString::fromUtf8("pushButtoTwo"));

        horizontalLayout->addWidget(pushButtoTwo);

        pushButtonThree = new QPushButton(Widget);
        pushButtonThree->setObjectName(QString::fromUtf8("pushButtonThree"));

        horizontalLayout->addWidget(pushButtonThree);

        pushButtonFour = new QPushButton(Widget);
        pushButtonFour->setObjectName(QString::fromUtf8("pushButtonFour"));

        horizontalLayout->addWidget(pushButtonFour);

        pushButtonFive = new QPushButton(Widget);
        pushButtonFive->setObjectName(QString::fromUtf8("pushButtonFive"));

        horizontalLayout->addWidget(pushButtonFive);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonOne->setText(QCoreApplication::translate("Widget", "One", nullptr));
        pushButtoTwo->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        pushButtonThree->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        pushButtonFour->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        pushButtonFive->setText(QCoreApplication::translate("Widget", "Five", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
