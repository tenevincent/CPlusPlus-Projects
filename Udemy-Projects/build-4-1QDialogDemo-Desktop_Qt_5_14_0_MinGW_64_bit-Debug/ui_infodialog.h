/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditPosition;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonWindows;
    QRadioButton *radioButtonMac;
    QRadioButton *radioButtonLinux;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(464, 267);
        QFont font;
        font.setPointSize(12);
        InfoDialog->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(InfoDialog);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(InfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(InfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditPosition = new QLineEdit(InfoDialog);
        lineEditPosition->setObjectName(QString::fromUtf8("lineEditPosition"));

        horizontalLayout_2->addWidget(lineEditPosition);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonWindows = new QRadioButton(groupBox);
        radioButtonWindows->setObjectName(QString::fromUtf8("radioButtonWindows"));

        verticalLayout->addWidget(radioButtonWindows);

        radioButtonMac = new QRadioButton(groupBox);
        radioButtonMac->setObjectName(QString::fromUtf8("radioButtonMac"));

        verticalLayout->addWidget(radioButtonMac);

        radioButtonLinux = new QRadioButton(groupBox);
        radioButtonLinux->setObjectName(QString::fromUtf8("radioButtonLinux"));

        verticalLayout->addWidget(radioButtonLinux);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(InfoDialog);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        horizontalLayout_3->addWidget(pushButtonOk);

        pushButtonCancel = new QPushButton(InfoDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout_3->addWidget(pushButtonCancel);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Your information", nullptr));
        label_2->setText(QCoreApplication::translate("InfoDialog", "Position", nullptr));
        lineEditPosition->setPlaceholderText(QCoreApplication::translate("InfoDialog", "Enter your position", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InfoDialog", "Favorite OS", nullptr));
        radioButtonWindows->setText(QCoreApplication::translate("InfoDialog", "Windows", nullptr));
        radioButtonMac->setText(QCoreApplication::translate("InfoDialog", "Mac", nullptr));
        radioButtonLinux->setText(QCoreApplication::translate("InfoDialog", "Linux", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("InfoDialog", "Ok", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("InfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
