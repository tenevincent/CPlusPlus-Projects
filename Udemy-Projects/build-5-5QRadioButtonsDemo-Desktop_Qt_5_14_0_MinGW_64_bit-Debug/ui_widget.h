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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxMac;
    QCheckBox *checkBoxLinux;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxCocaCola;
    QCheckBox *checkBoxWater;
    QCheckBox *checkBoxOrangeJuice;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButtonCocaCola_2;
    QRadioButton *radioButtonWater_2;
    QRadioButton *radioButtonOrangeJuice_2;
    QRadioButton *radioButtonOrangeJuice_3;
    QPushButton *pushButtonSavce;
    QPushButton *pushButtonSetState;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(658, 401);
        verticalLayout_5 = new QVBoxLayout(Widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxWindows = new QCheckBox(groupBox);
        checkBoxWindows->setObjectName(QString::fromUtf8("checkBoxWindows"));
        QFont font;
        font.setPointSize(12);
        checkBoxWindows->setFont(font);

        verticalLayout->addWidget(checkBoxWindows);

        checkBoxMac = new QCheckBox(groupBox);
        checkBoxMac->setObjectName(QString::fromUtf8("checkBoxMac"));
        checkBoxMac->setFont(font);

        verticalLayout->addWidget(checkBoxMac);

        checkBoxLinux = new QCheckBox(groupBox);
        checkBoxLinux->setObjectName(QString::fromUtf8("checkBoxLinux"));
        checkBoxLinux->setFont(font);

        verticalLayout->addWidget(checkBoxLinux);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxCocaCola = new QCheckBox(groupBox_2);
        checkBoxCocaCola->setObjectName(QString::fromUtf8("checkBoxCocaCola"));
        checkBoxCocaCola->setFont(font);

        verticalLayout_2->addWidget(checkBoxCocaCola);

        checkBoxWater = new QCheckBox(groupBox_2);
        checkBoxWater->setObjectName(QString::fromUtf8("checkBoxWater"));
        checkBoxWater->setFont(font);

        verticalLayout_2->addWidget(checkBoxWater);

        checkBoxOrangeJuice = new QCheckBox(groupBox_2);
        checkBoxOrangeJuice->setObjectName(QString::fromUtf8("checkBoxOrangeJuice"));
        checkBoxOrangeJuice->setFont(font);

        verticalLayout_2->addWidget(checkBoxOrangeJuice);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButtonCocaCola_2 = new QRadioButton(groupBox_3);
        radioButtonCocaCola_2->setObjectName(QString::fromUtf8("radioButtonCocaCola_2"));
        radioButtonCocaCola_2->setFont(font);

        verticalLayout_3->addWidget(radioButtonCocaCola_2);

        radioButtonWater_2 = new QRadioButton(groupBox_3);
        radioButtonWater_2->setObjectName(QString::fromUtf8("radioButtonWater_2"));
        radioButtonWater_2->setFont(font);

        verticalLayout_3->addWidget(radioButtonWater_2);

        radioButtonOrangeJuice_2 = new QRadioButton(groupBox_3);
        radioButtonOrangeJuice_2->setObjectName(QString::fromUtf8("radioButtonOrangeJuice_2"));
        radioButtonOrangeJuice_2->setFont(font);

        verticalLayout_3->addWidget(radioButtonOrangeJuice_2);

        radioButtonOrangeJuice_3 = new QRadioButton(groupBox_3);
        radioButtonOrangeJuice_3->setObjectName(QString::fromUtf8("radioButtonOrangeJuice_3"));
        radioButtonOrangeJuice_3->setFont(font);

        verticalLayout_3->addWidget(radioButtonOrangeJuice_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButtonSavce = new QPushButton(groupBox_3);
        pushButtonSavce->setObjectName(QString::fromUtf8("pushButtonSavce"));

        verticalLayout_4->addWidget(pushButtonSavce);

        pushButtonSetState = new QPushButton(groupBox_3);
        pushButtonSetState->setObjectName(QString::fromUtf8("pushButtonSetState"));

        verticalLayout_4->addWidget(pushButtonSetState);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(groupBox_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "Choose OS (Exclusive)", nullptr));
        checkBoxWindows->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
        checkBoxMac->setText(QCoreApplication::translate("Widget", "Mac", nullptr));
        checkBoxLinux->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Choose Drink", nullptr));
        checkBoxCocaCola->setText(QCoreApplication::translate("Widget", "Coca Cola", nullptr));
        checkBoxWater->setText(QCoreApplication::translate("Widget", "Water", nullptr));
        checkBoxOrangeJuice->setText(QCoreApplication::translate("Widget", "Orange Juice", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "Choose Drink", nullptr));
        radioButtonCocaCola_2->setText(QCoreApplication::translate("Widget", "A", nullptr));
        radioButtonWater_2->setText(QCoreApplication::translate("Widget", "B", nullptr));
        radioButtonOrangeJuice_2->setText(QCoreApplication::translate("Widget", "C", nullptr));
        radioButtonOrangeJuice_3->setText(QCoreApplication::translate("Widget", "D", nullptr));
        pushButtonSavce->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        pushButtonSetState->setText(QCoreApplication::translate("Widget", "Set State", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
