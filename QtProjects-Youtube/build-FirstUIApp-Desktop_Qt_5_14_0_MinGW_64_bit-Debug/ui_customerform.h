/********************************************************************************
** Form generated from reading UI file 'customerform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERFORM_H
#define UI_CUSTOMERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerForm
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *CustomerForm)
    {
        if (CustomerForm->objectName().isEmpty())
            CustomerForm->setObjectName(QString::fromUtf8("CustomerForm"));
        CustomerForm->resize(600, 386);
        formLayout = new QFormLayout(CustomerForm);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(CustomerForm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(CustomerForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(CustomerForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(CustomerForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(CustomerForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(CustomerForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(CustomerForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        plainTextEdit = new QPlainTextEdit(CustomerForm);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(CustomerForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(CustomerForm);

        QMetaObject::connectSlotsByName(CustomerForm);
    } // setupUi

    void retranslateUi(QWidget *CustomerForm)
    {
        CustomerForm->setWindowTitle(QCoreApplication::translate("CustomerForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CustomerForm", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("CustomerForm", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("CustomerForm", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("CustomerForm", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("CustomerForm", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerForm: public Ui_CustomerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERFORM_H
