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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonOne;
    QPushButton *pushButtoTwo;
    QPushButton *pushButtonThree;
    QPushButton *pushButtonFour;
    QPushButton *pushButtonFive;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(774, 389);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonOne = new QPushButton(Widget);
        pushButtonOne->setObjectName(QString::fromUtf8("pushButtonOne"));

        verticalLayout->addWidget(pushButtonOne);

        pushButtoTwo = new QPushButton(Widget);
        pushButtoTwo->setObjectName(QString::fromUtf8("pushButtoTwo"));

        verticalLayout->addWidget(pushButtoTwo);

        pushButtonThree = new QPushButton(Widget);
        pushButtonThree->setObjectName(QString::fromUtf8("pushButtonThree"));

        verticalLayout->addWidget(pushButtonThree);

        pushButtonFour = new QPushButton(Widget);
        pushButtonFour->setObjectName(QString::fromUtf8("pushButtonFour"));

        verticalLayout->addWidget(pushButtonFour);

        pushButtonFive = new QPushButton(Widget);
        pushButtonFive->setObjectName(QString::fromUtf8("pushButtonFive"));

        verticalLayout->addWidget(pushButtonFive);


        verticalLayout_2->addLayout(verticalLayout);


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
