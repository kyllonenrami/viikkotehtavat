/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *n1;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *add1;
    QPushButton *n4;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *sub2;
    QPushButton *n7;
    QPushButton *n8;
    QPushButton *n9;
    QPushButton *mul3;
    QPushButton *n0;
    QPushButton *clr;
    QPushButton *ent;
    QPushButton *div4;
    QLineEdit *laatikko1;
    QLineEdit *laatikko2;
    QLineEdit *result;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 30, 56, 18));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 50, 56, 18));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 40, 51, 16));
        n1 = new QPushButton(centralwidget);
        n1->setObjectName("n1");
        n1->setGeometry(QRect(400, 60, 56, 18));
        n2 = new QPushButton(centralwidget);
        n2->setObjectName("n2");
        n2->setGeometry(QRect(460, 60, 56, 18));
        n3 = new QPushButton(centralwidget);
        n3->setObjectName("n3");
        n3->setGeometry(QRect(520, 60, 56, 18));
        add1 = new QPushButton(centralwidget);
        add1->setObjectName("add1");
        add1->setGeometry(QRect(580, 60, 56, 18));
        n4 = new QPushButton(centralwidget);
        n4->setObjectName("n4");
        n4->setGeometry(QRect(400, 80, 56, 18));
        n5 = new QPushButton(centralwidget);
        n5->setObjectName("n5");
        n5->setGeometry(QRect(460, 80, 56, 18));
        n6 = new QPushButton(centralwidget);
        n6->setObjectName("n6");
        n6->setGeometry(QRect(520, 80, 56, 18));
        sub2 = new QPushButton(centralwidget);
        sub2->setObjectName("sub2");
        sub2->setGeometry(QRect(580, 80, 56, 18));
        n7 = new QPushButton(centralwidget);
        n7->setObjectName("n7");
        n7->setGeometry(QRect(400, 100, 56, 18));
        n8 = new QPushButton(centralwidget);
        n8->setObjectName("n8");
        n8->setGeometry(QRect(460, 100, 56, 18));
        n9 = new QPushButton(centralwidget);
        n9->setObjectName("n9");
        n9->setGeometry(QRect(520, 100, 56, 18));
        mul3 = new QPushButton(centralwidget);
        mul3->setObjectName("mul3");
        mul3->setGeometry(QRect(580, 100, 56, 18));
        n0 = new QPushButton(centralwidget);
        n0->setObjectName("n0");
        n0->setGeometry(QRect(400, 120, 56, 18));
        clr = new QPushButton(centralwidget);
        clr->setObjectName("clr");
        clr->setGeometry(QRect(460, 120, 56, 18));
        ent = new QPushButton(centralwidget);
        ent->setObjectName("ent");
        ent->setGeometry(QRect(520, 120, 56, 18));
        div4 = new QPushButton(centralwidget);
        div4->setObjectName("div4");
        div4->setGeometry(QRect(580, 120, 56, 18));
        laatikko1 = new QLineEdit(centralwidget);
        laatikko1->setObjectName("laatikko1");
        laatikko1->setGeometry(QRect(400, 40, 71, 20));
        laatikko2 = new QLineEdit(centralwidget);
        laatikko2->setObjectName("laatikko2");
        laatikko2->setGeometry(QRect(480, 40, 81, 20));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(570, 40, 71, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 20, 71, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(480, 20, 81, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(570, 20, 71, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add1->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        sub2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        mul3->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clr->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        ent->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        div4->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "    Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "   Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "     Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
