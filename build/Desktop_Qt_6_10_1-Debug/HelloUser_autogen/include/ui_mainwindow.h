/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btnPB;
    QPushButton *btnSubmit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(528, 268);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        btn1->setMinimumSize(QSize(48, 48));
        btn1->setMaximumSize(QSize(48, 48));

        horizontalLayout->addWidget(btn1);

        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");

        horizontalLayout->addWidget(btn2);

        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");

        horizontalLayout->addWidget(btn3);

        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");

        horizontalLayout->addWidget(btn4);

        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");

        horizontalLayout->addWidget(btn5);

        btnPB = new QPushButton(centralwidget);
        btnPB->setObjectName("btnPB");

        horizontalLayout->addWidget(btnPB);


        verticalLayout_2->addLayout(horizontalLayout);

        btnSubmit = new QPushButton(centralwidget);
        btnSubmit->setObjectName("btnSubmit");
        btnSubmit->setMaximumSize(QSize(200, 32));

        verticalLayout_2->addWidget(btnSubmit, 0, Qt::AlignmentFlag::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        btn1->setProperty("primary", QVariant(QString()));
        btn1->setProperty("type", QVariant(QCoreApplication::translate("MainWindow", "primary", nullptr)));
        btn2->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
        btn2->setProperty("type", QVariant(QCoreApplication::translate("MainWindow", "primary", nullptr)));
        btn3->setText(QCoreApplication::translate("MainWindow", "31", nullptr));
        btn3->setProperty("type", QVariant(QCoreApplication::translate("MainWindow", "primary", nullptr)));
        btn4->setText(QCoreApplication::translate("MainWindow", "66", nullptr));
        btn4->setProperty("type", QVariant(QCoreApplication::translate("MainWindow", "primary", nullptr)));
        btn5->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn5->setProperty("type", QVariant(QCoreApplication::translate("MainWindow", "primary", nullptr)));
        btnPB->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnPB->setProperty("type", QVariant(QCoreApplication::translate("MainWindow", "danger", nullptr)));
        btnSubmit->setText(QCoreApplication::translate("MainWindow", "Get Rich!", nullptr));
        btnSubmit->setProperty("type", QVariant(QCoreApplication::translate("MainWindow", "submit", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
