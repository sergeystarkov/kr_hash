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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_demoForm
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QPushButton *search;
    QHBoxLayout *horizontalLayout_4;
    QWebEngineView *widget;
    QFrame *line;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *str;
    QSpacerItem *horizontalSpacer_2;
    QProgressBar *progressBar;

    void setupUi(QWidget *demoForm)
    {
        if (demoForm->objectName().isEmpty())
            demoForm->setObjectName(QStringLiteral("demoForm"));
        demoForm->resize(520, 389);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(demoForm->sizePolicy().hasHeightForWidth());
        demoForm->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(demoForm);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton = new QPushButton(demoForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(demoForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(demoForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        search = new QPushButton(demoForm);
        search->setObjectName(QStringLiteral("search"));

        horizontalLayout->addWidget(search);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget = new QWebEngineView(demoForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(300, 200));

        horizontalLayout_4->addWidget(widget);

        line = new QFrame(demoForm);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_3 = new QPushButton(demoForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(demoForm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_4, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line_2 = new QFrame(demoForm);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        str = new QLabel(demoForm);
        str->setObjectName(QStringLiteral("str"));

        horizontalLayout_2->addWidget(str);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        progressBar = new QProgressBar(demoForm);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(demoForm);

        QMetaObject::connectSlotsByName(demoForm);
    } // setupUi

    void retranslateUi(QWidget *demoForm)
    {
        demoForm->setWindowTitle(QApplication::translate("demoForm", "Form", 0));
        pushButton->setText(QApplication::translate("demoForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214 \320\262 \320\274\320\260\321\201\321\201\320\270\320\262", 0));
        pushButton_2->setText(QApplication::translate("demoForm", "\320\241\320\276\320\261\321\200\320\260\321\202\321\214 \321\205\320\265\321\210 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
        search->setText(QApplication::translate("demoForm", "\320\237\320\276\320\270\321\201\320\272", 0));
        pushButton_3->setText(QApplication::translate("demoForm", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("demoForm", "PushButton", 0));
        str->setText(QApplication::translate("demoForm", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class demoForm: public Ui_demoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOFORM_H
