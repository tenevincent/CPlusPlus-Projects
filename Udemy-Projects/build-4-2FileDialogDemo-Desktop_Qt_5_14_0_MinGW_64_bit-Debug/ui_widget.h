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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonFontDialog;
    QPushButton *pushButtonOpenFile;
    QPushButton *pushButton;
    QPushButton *pushButtonSaveFile;
    QPushButton *pushButtonOpenFileMultiple;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonTextColor;
    QPushButton *pushButtonBackgroundColor;
    QPushButton *pushButtonFontColor;
    QPushButton *pushButtonInputDialog;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonFontDialog = new QPushButton(Widget);
        pushButtonFontDialog->setObjectName(QString::fromUtf8("pushButtonFontDialog"));

        horizontalLayout_2->addWidget(pushButtonFontDialog);

        pushButtonOpenFile = new QPushButton(Widget);
        pushButtonOpenFile->setObjectName(QString::fromUtf8("pushButtonOpenFile"));

        horizontalLayout_2->addWidget(pushButtonOpenFile);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButtonSaveFile = new QPushButton(Widget);
        pushButtonSaveFile->setObjectName(QString::fromUtf8("pushButtonSaveFile"));

        horizontalLayout_2->addWidget(pushButtonSaveFile);

        pushButtonOpenFileMultiple = new QPushButton(Widget);
        pushButtonOpenFileMultiple->setObjectName(QString::fromUtf8("pushButtonOpenFileMultiple"));

        horizontalLayout_2->addWidget(pushButtonOpenFileMultiple);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonTextColor = new QPushButton(groupBox);
        pushButtonTextColor->setObjectName(QString::fromUtf8("pushButtonTextColor"));

        verticalLayout->addWidget(pushButtonTextColor);

        pushButtonBackgroundColor = new QPushButton(groupBox);
        pushButtonBackgroundColor->setObjectName(QString::fromUtf8("pushButtonBackgroundColor"));

        verticalLayout->addWidget(pushButtonBackgroundColor);

        pushButtonFontColor = new QPushButton(groupBox);
        pushButtonFontColor->setObjectName(QString::fromUtf8("pushButtonFontColor"));

        verticalLayout->addWidget(pushButtonFontColor);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(groupBox);

        pushButtonInputDialog = new QPushButton(Widget);
        pushButtonInputDialog->setObjectName(QString::fromUtf8("pushButtonInputDialog"));

        horizontalLayout_2->addWidget(pushButtonInputDialog);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        groupBox->raise();
        pushButton->raise();
        pushButtonOpenFile->raise();
        pushButtonOpenFileMultiple->raise();
        pushButtonSaveFile->raise();
        pushButtonFontDialog->raise();
        label->raise();
        pushButtonTextColor->raise();
        pushButtonBackgroundColor->raise();
        pushButtonFontColor->raise();
        pushButtonInputDialog->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonFontDialog->setText(QCoreApplication::translate("Widget", "Font Dialog", nullptr));
        pushButtonOpenFile->setText(QCoreApplication::translate("Widget", "Open File", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Open Directory", nullptr));
        pushButtonSaveFile->setText(QCoreApplication::translate("Widget", "Save File", nullptr));
        pushButtonOpenFileMultiple->setText(QCoreApplication::translate("Widget", "Select Mutiple Files", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "Color DialogBox", nullptr));
        pushButtonTextColor->setText(QCoreApplication::translate("Widget", "Text Color", nullptr));
        pushButtonBackgroundColor->setText(QCoreApplication::translate("Widget", "Background Color", nullptr));
        pushButtonFontColor->setText(QCoreApplication::translate("Widget", "Font Color", nullptr));
        pushButtonInputDialog->setText(QCoreApplication::translate("Widget", "Input Dialog", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
