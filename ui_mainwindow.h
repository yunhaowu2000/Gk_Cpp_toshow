/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *start_game;
    QPushButton *show_profile;
    QPushButton *choosemotorradwindow;
    QPushButton *chooseweatherwindow;
    QLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(641, 383);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        start_game = new QPushButton(centralwidget);
        start_game->setObjectName(QString::fromUtf8("start_game"));
        start_game->setEnabled(true);
        start_game->setGeometry(QRect(150, 130, 331, 71));
        show_profile = new QPushButton(centralwidget);
        show_profile->setObjectName(QString::fromUtf8("show_profile"));
        show_profile->setGeometry(QRect(190, 210, 251, 31));
        choosemotorradwindow = new QPushButton(centralwidget);
        choosemotorradwindow->setObjectName(QString::fromUtf8("choosemotorradwindow"));
        choosemotorradwindow->setGeometry(QRect(190, 250, 251, 31));
        chooseweatherwindow = new QPushButton(centralwidget);
        chooseweatherwindow->setObjectName(QString::fromUtf8("chooseweatherwindow"));
        chooseweatherwindow->setGeometry(QRect(190, 290, 251, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 501, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 641, 24));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        start_game->setText(QApplication::translate("MainWindow", "Start", nullptr));
        show_profile->setText(QApplication::translate("MainWindow", "Profile", nullptr));
        choosemotorradwindow->setText(QApplication::translate("MainWindow", "Motorcylce", nullptr));
        chooseweatherwindow->setText(QApplication::translate("MainWindow", "Weather", nullptr));
        label->setText(QApplication::translate("MainWindow", "Game_name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
