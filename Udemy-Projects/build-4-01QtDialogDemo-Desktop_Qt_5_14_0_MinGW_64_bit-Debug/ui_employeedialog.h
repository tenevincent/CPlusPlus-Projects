/********************************************************************************
** Form generated from reading UI file 'employeedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDIALOG_H
#define UI_EMPLOYEEDIALOG_H

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

class Ui_EmployeeDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *positionLineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *windowsRadioButton;
    QRadioButton *macRadioButton;
    QRadioButton *linuxRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *EmployeeDialog)
    {
        if (EmployeeDialog->objectName().isEmpty())
            EmployeeDialog->setObjectName(QString::fromUtf8("EmployeeDialog"));
        EmployeeDialog->resize(483, 222);
        horizontalLayout_3 = new QHBoxLayout(EmployeeDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(EmployeeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(EmployeeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        positionLineEdit = new QLineEdit(EmployeeDialog);
        positionLineEdit->setObjectName(QString::fromUtf8("positionLineEdit"));

        horizontalLayout->addWidget(positionLineEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(EmployeeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowsRadioButton = new QRadioButton(groupBox);
        windowsRadioButton->setObjectName(QString::fromUtf8("windowsRadioButton"));

        verticalLayout->addWidget(windowsRadioButton);

        macRadioButton = new QRadioButton(groupBox);
        macRadioButton->setObjectName(QString::fromUtf8("macRadioButton"));

        verticalLayout->addWidget(macRadioButton);

        linuxRadioButton = new QRadioButton(groupBox);
        linuxRadioButton->setObjectName(QString::fromUtf8("linuxRadioButton"));

        verticalLayout->addWidget(linuxRadioButton);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(EmployeeDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(EmployeeDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(EmployeeDialog);

        QMetaObject::connectSlotsByName(EmployeeDialog);
    } // setupUi

    void retranslateUi(QDialog *EmployeeDialog)
    {
        EmployeeDialog->setWindowTitle(QCoreApplication::translate("EmployeeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EmployeeDialog", "Your Information", nullptr));
        label_2->setText(QCoreApplication::translate("EmployeeDialog", "Position : ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EmployeeDialog", "Favorite Os", nullptr));
        windowsRadioButton->setText(QCoreApplication::translate("EmployeeDialog", "Windows", nullptr));
        macRadioButton->setText(QCoreApplication::translate("EmployeeDialog", "Mac", nullptr));
        linuxRadioButton->setText(QCoreApplication::translate("EmployeeDialog", "Linux", nullptr));
        okButton->setText(QCoreApplication::translate("EmployeeDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("EmployeeDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeDialog: public Ui_EmployeeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDIALOG_H
