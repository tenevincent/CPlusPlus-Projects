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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonWrite;
    QPushButton *pushButtonRead;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditSource;
    QPushButton *pushButtonSelectFile;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditDestination;
    QPushButton *pushButtonCopy;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(501, 322);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 343, 258));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_3->addWidget(plainTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonWrite = new QPushButton(widget);
        pushButtonWrite->setObjectName(QString::fromUtf8("pushButtonWrite"));

        verticalLayout->addWidget(pushButtonWrite);

        pushButtonRead = new QPushButton(widget);
        pushButtonRead->setObjectName(QString::fromUtf8("pushButtonRead"));

        verticalLayout->addWidget(pushButtonRead);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditSource = new QLineEdit(widget);
        lineEditSource->setObjectName(QString::fromUtf8("lineEditSource"));

        horizontalLayout->addWidget(lineEditSource);

        pushButtonSelectFile = new QPushButton(widget);
        pushButtonSelectFile->setObjectName(QString::fromUtf8("pushButtonSelectFile"));

        horizontalLayout->addWidget(pushButtonSelectFile);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditDestination = new QLineEdit(widget);
        lineEditDestination->setObjectName(QString::fromUtf8("lineEditDestination"));

        horizontalLayout_2->addWidget(lineEditDestination);

        pushButtonCopy = new QPushButton(widget);
        pushButtonCopy->setObjectName(QString::fromUtf8("pushButtonCopy"));

        horizontalLayout_2->addWidget(pushButtonCopy);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonWrite->setText(QCoreApplication::translate("Widget", "Write", nullptr));
        pushButtonRead->setText(QCoreApplication::translate("Widget", "Read", nullptr));
        pushButtonSelectFile->setText(QCoreApplication::translate("Widget", "Select File", nullptr));
        pushButtonCopy->setText(QCoreApplication::translate("Widget", "Copy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
