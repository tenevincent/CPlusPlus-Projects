/********************************************************************************
** Form generated from reading UI file 'customform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMFORM_H
#define UI_CUSTOMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomForm
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QListWidget *listWidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_2;

    void setupUi(QWidget *CustomForm)
    {
        if (CustomForm->objectName().isEmpty())
            CustomForm->setObjectName(QString::fromUtf8("CustomForm"));
        CustomForm->resize(789, 461);
        horizontalLayout = new QHBoxLayout(CustomForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(CustomForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(tab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(202, 0));
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        splitter->addWidget(listWidget);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(8);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 381, 121));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        splitter->addWidget(frame);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);

        horizontalLayout_2->addWidget(splitter);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(CustomForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CustomForm);
    } // setupUi

    void retranslateUi(QWidget *CustomForm)
    {
        CustomForm->setWindowTitle(QCoreApplication::translate("CustomForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CustomForm", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("CustomForm", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CustomForm", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CustomForm", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomForm: public Ui_CustomForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMFORM_H
