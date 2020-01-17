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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *uiTextLabel;
    QLabel *codeTextLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(605, 334);
        Widget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 127);"));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        uiTextLabel = new QLabel(Widget);
        uiTextLabel->setObjectName(QString::fromUtf8("uiTextLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Arabic"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        uiTextLabel->setFont(font1);
        uiTextLabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(uiTextLabel);

        codeTextLabel = new QLabel(Widget);
        codeTextLabel->setObjectName(QString::fromUtf8("codeTextLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(36);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        codeTextLabel->setFont(font2);
        codeTextLabel->setStyleSheet(QString::fromUtf8("font: 36pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 170, 255);"));

        verticalLayout->addWidget(codeTextLabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Click Me", nullptr));
        uiTextLabel->setText(QCoreApplication::translate("Widget", "UiText", nullptr));
        codeTextLabel->setText(QCoreApplication::translate("Widget", "CodeText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
