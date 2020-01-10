/********************************************************************************
** Form generated from reading UI file 'employeeform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEFORM_H
#define UI_EMPLOYEEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeForm
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QComboBox *comboBoxEmployeeStatus;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *EmployeeForm)
    {
        if (EmployeeForm->objectName().isEmpty())
            EmployeeForm->setObjectName(QString::fromUtf8("EmployeeForm"));
        EmployeeForm->resize(416, 157);
        horizontalLayout_2 = new QHBoxLayout(EmployeeForm);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EmployeeForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(EmployeeForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(EmployeeForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(EmployeeForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(EmployeeForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBox = new QSpinBox(EmployeeForm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);

        label_4 = new QLabel(EmployeeForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBoxEmployeeStatus = new QComboBox(EmployeeForm);
        comboBoxEmployeeStatus->setObjectName(QString::fromUtf8("comboBoxEmployeeStatus"));

        gridLayout->addWidget(comboBoxEmployeeStatus, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(EmployeeForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(EmployeeForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout);


        retranslateUi(EmployeeForm);
        QObject::connect(pushButton_2, SIGNAL(clicked()), EmployeeForm, SLOT(close()));

        QMetaObject::connectSlotsByName(EmployeeForm);
    } // setupUi

    void retranslateUi(QWidget *EmployeeForm)
    {
        EmployeeForm->setWindowTitle(QCoreApplication::translate("EmployeeForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("EmployeeForm", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("EmployeeForm", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("EmployeeForm", "Age", nullptr));
        label_4->setText(QCoreApplication::translate("EmployeeForm", "Employment Status", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EmployeeForm", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("EmployeeForm", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeForm: public Ui_EmployeeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEFORM_H
