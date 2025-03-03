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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *P1;
    QPushButton *P2;
    QPushButton *T1;
    QPushButton *T2;
    QPushButton *S1;
    QPushButton *S2;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        P1 = new QPushButton(centralwidget);
        P1->setObjectName("P1");
        P1->setGeometry(QRect(170, 50, 80, 18));
        P2 = new QPushButton(centralwidget);
        P2->setObjectName("P2");
        P2->setGeometry(QRect(480, 50, 80, 18));
        T1 = new QPushButton(centralwidget);
        T1->setObjectName("T1");
        T1->setGeometry(QRect(270, 110, 80, 18));
        T2 = new QPushButton(centralwidget);
        T2->setObjectName("T2");
        T2->setGeometry(QRect(380, 110, 80, 18));
        S1 = new QPushButton(centralwidget);
        S1->setObjectName("S1");
        S1->setGeometry(QRect(190, 190, 81, 18));
        S2 = new QPushButton(centralwidget);
        S2->setObjectName("S2");
        S2->setGeometry(QRect(460, 190, 80, 18));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(170, 20, 81, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(480, 20, 81, 23));
        progressBar_2->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 80, 191, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        P1->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        P2->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        T1->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        T2->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        S1->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        S2->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select game time and start playing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
