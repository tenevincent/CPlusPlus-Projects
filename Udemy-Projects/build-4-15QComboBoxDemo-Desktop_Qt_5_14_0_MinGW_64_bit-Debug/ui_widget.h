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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonCaptureValue;
    QPushButton *pushButtonSetValue;
    QPushButton *pushButtonGetValue;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 100, 221, 21));
        QFont font;
        font.setPointSize(12);
        comboBox->setFont(font);
        comboBox->setEditable(true);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 230, 511, 121));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(320, 90, 110, 98));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCaptureValue = new QPushButton(widget);
        pushButtonCaptureValue->setObjectName(QString::fromUtf8("pushButtonCaptureValue"));
        pushButtonCaptureValue->setFont(font);

        verticalLayout->addWidget(pushButtonCaptureValue);

        pushButtonSetValue = new QPushButton(widget);
        pushButtonSetValue->setObjectName(QString::fromUtf8("pushButtonSetValue"));
        pushButtonSetValue->setFont(font);

        verticalLayout->addWidget(pushButtonSetValue);

        pushButtonGetValue = new QPushButton(widget);
        pushButtonGetValue->setObjectName(QString::fromUtf8("pushButtonGetValue"));
        pushButtonGetValue->setFont(font);

        verticalLayout->addWidget(pushButtonGetValue);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButtonCaptureValue->setText(QCoreApplication::translate("Widget", "Capture Value", nullptr));
        pushButtonSetValue->setText(QCoreApplication::translate("Widget", "Set Value", nullptr));
        pushButtonGetValue->setText(QCoreApplication::translate("Widget", "Get Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
