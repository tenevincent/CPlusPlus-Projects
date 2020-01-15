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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonChooseDirectory;
    QPushButton *pushButtonDirectoryExists;
    QPushButton *pushButtonCreateDirectory;
    QPushButton *pushButtonDirOrFile;
    QPushButton *pushButtonFolderContents;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(589, 242);
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonChooseDirectory = new QPushButton(Widget);
        pushButtonChooseDirectory->setObjectName(QString::fromUtf8("pushButtonChooseDirectory"));

        verticalLayout_2->addWidget(pushButtonChooseDirectory);

        pushButtonDirectoryExists = new QPushButton(Widget);
        pushButtonDirectoryExists->setObjectName(QString::fromUtf8("pushButtonDirectoryExists"));

        verticalLayout_2->addWidget(pushButtonDirectoryExists);

        pushButtonCreateDirectory = new QPushButton(Widget);
        pushButtonCreateDirectory->setObjectName(QString::fromUtf8("pushButtonCreateDirectory"));

        verticalLayout_2->addWidget(pushButtonCreateDirectory);

        pushButtonDirOrFile = new QPushButton(Widget);
        pushButtonDirOrFile->setObjectName(QString::fromUtf8("pushButtonDirOrFile"));

        verticalLayout_2->addWidget(pushButtonDirOrFile);

        pushButtonFolderContents = new QPushButton(Widget);
        pushButtonFolderContents->setObjectName(QString::fromUtf8("pushButtonFolderContents"));

        verticalLayout_2->addWidget(pushButtonFolderContents);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonChooseDirectory->setText(QCoreApplication::translate("Widget", "Choose Directory", nullptr));
        pushButtonDirectoryExists->setText(QCoreApplication::translate("Widget", "Directory Exists?", nullptr));
        pushButtonCreateDirectory->setText(QCoreApplication::translate("Widget", "Create Directory", nullptr));
        pushButtonDirOrFile->setText(QCoreApplication::translate("Widget", "Dir of File?", nullptr));
        pushButtonFolderContents->setText(QCoreApplication::translate("Widget", "Folder Contents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
