/********************************************************************************
** Form generated from reading UI file 'demoform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOFORM_H
#define UI_DEMOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_demoForm
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *importButton;
    QPushButton *genHash;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QWebEngineView *web;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *demoForm)
    {
        if (demoForm->objectName().isEmpty())
            demoForm->setObjectName(QStringLiteral("demoForm"));
        demoForm->resize(730, 421);
        gridLayout_2 = new QGridLayout(demoForm);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        importButton = new QPushButton(demoForm);
        importButton->setObjectName(QStringLiteral("importButton"));

        verticalLayout_2->addWidget(importButton);

        genHash = new QPushButton(demoForm);
        genHash->setObjectName(QStringLiteral("genHash"));

        verticalLayout_2->addWidget(genHash);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(demoForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_3 = new QPushButton(demoForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(demoForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        progressBar = new QProgressBar(demoForm);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_3->addWidget(progressBar);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        web = new QWebEngineView(demoForm);
        web->setObjectName(QStringLiteral("web"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(web->sizePolicy().hasHeightForWidth());
        web->setSizePolicy(sizePolicy);
        web->setMinimumSize(QSize(300, 200));

        verticalLayout_3->addWidget(web);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_5 = new QPushButton(demoForm);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_5->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(demoForm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_5->addWidget(pushButton_4);

        textBrowser = new QTextBrowser(demoForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(textBrowser);


        horizontalLayout_2->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(demoForm);

        QMetaObject::connectSlotsByName(demoForm);
    } // setupUi

    void retranslateUi(QWidget *demoForm)
    {
        demoForm->setWindowTitle(QApplication::translate("demoForm", "Form", 0));
        importButton->setText(QApplication::translate("demoForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\261\320\260\320\267\321\203 \321\201\320\273\320\276\320\262", 0));
        genHash->setText(QApplication::translate("demoForm", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214  \321\205\320\265\321\210 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
        pushButton_3->setText(QApplication::translate("demoForm", "\320\237\320\276\320\270\321\201\320\272", 0));
        label->setText(QApplication::translate("demoForm", "TextLabel", 0));
        pushButton_5->setText(QApplication::translate("demoForm", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("demoForm", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class demoForm: public Ui_demoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOFORM_H
