/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *display;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnAdd;
    QPushButton *btnSub;
    QPushButton *btnMul;
    QPushButton *btnDiv;
    QPushButton *btnIgual;
    QPushButton *btnLimpar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(404, 416);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(90, 40, 231, 61));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(90, 110, 51, 51));
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(150, 110, 51, 51));
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(210, 110, 51, 51));
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(90, 170, 51, 51));
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(150, 170, 51, 51));
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(210, 170, 51, 51));
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(90, 230, 51, 51));
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(150, 230, 51, 51));
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(210, 230, 51, 51));
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(90, 290, 51, 51));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(270, 110, 51, 51));
        btnSub = new QPushButton(centralwidget);
        btnSub->setObjectName("btnSub");
        btnSub->setGeometry(QRect(270, 170, 51, 51));
        btnMul = new QPushButton(centralwidget);
        btnMul->setObjectName("btnMul");
        btnMul->setGeometry(QRect(270, 230, 51, 51));
        btnDiv = new QPushButton(centralwidget);
        btnDiv->setObjectName("btnDiv");
        btnDiv->setGeometry(QRect(270, 290, 51, 51));
        btnIgual = new QPushButton(centralwidget);
        btnIgual->setObjectName("btnIgual");
        btnIgual->setGeometry(QRect(150, 290, 51, 51));
        btnLimpar = new QPushButton(centralwidget);
        btnLimpar->setObjectName("btnLimpar");
        btnLimpar->setGeometry(QRect(210, 290, 51, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 404, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnIgual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnLimpar->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
