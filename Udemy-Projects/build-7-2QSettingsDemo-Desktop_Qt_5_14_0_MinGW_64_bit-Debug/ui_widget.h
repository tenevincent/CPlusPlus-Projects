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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton1;
    QPushButton *pushButton_4;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonLoadColors;
    QPushButton *pushButtonSaveColors;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(544, 245);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 50, 391, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton1 = new QPushButton(widget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton3 = new QPushButton(widget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton4 = new QPushButton(widget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton5 = new QPushButton(widget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton6 = new QPushButton(widget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton7 = new QPushButton(widget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton8 = new QPushButton(widget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton9 = new QPushButton(widget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonLoadColors = new QPushButton(widget);
        pushButtonLoadColors->setObjectName(QString::fromUtf8("pushButtonLoadColors"));
        sizePolicy.setHeightForWidth(pushButtonLoadColors->sizePolicy().hasHeightForWidth());
        pushButtonLoadColors->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButtonLoadColors);

        pushButtonSaveColors = new QPushButton(widget);
        pushButtonSaveColors->setObjectName(QString::fromUtf8("pushButtonSaveColors"));
        sizePolicy.setHeightForWidth(pushButtonSaveColors->sizePolicy().hasHeightForWidth());
        pushButtonSaveColors->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButtonSaveColors);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton1->setText(QCoreApplication::translate("Widget", "One", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        pushButton3->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        pushButton4->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        pushButton5->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        pushButton6->setText(QCoreApplication::translate("Widget", "Sixth", nullptr));
        pushButton7->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        pushButton8->setText(QCoreApplication::translate("Widget", "Eight", nullptr));
        pushButton9->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
        pushButtonLoadColors->setText(QCoreApplication::translate("Widget", "Load Colors", nullptr));
        pushButtonSaveColors->setText(QCoreApplication::translate("Widget", "Save Colors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
