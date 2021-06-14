/********************************************************************************
** Form generated from reading UI file 'ShowProfileWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPROFILEWINDOW_H
#define UI_SHOWPROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowProfileWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QPushButton *backBtn;
    QPushButton *player_1;
    QPushButton *player_2;
    QPushButton *player_3;
    QPushButton *player_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShowProfileWindow)
    {
        if (ShowProfileWindow->objectName().isEmpty())
            ShowProfileWindow->setObjectName(QString::fromUtf8("ShowProfileWindow"));
        ShowProfileWindow->resize(800, 600);
        centralwidget = new QWidget(ShowProfileWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(320, 0, 451, 501));
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(650, 520, 113, 32));
        player_1 = new QPushButton(centralwidget);
        player_1->setObjectName(QString::fromUtf8("player_1"));
        player_1->setGeometry(QRect(60, 40, 211, 61));
        player_2 = new QPushButton(centralwidget);
        player_2->setObjectName(QString::fromUtf8("player_2"));
        player_2->setGeometry(QRect(60, 120, 211, 61));
        player_3 = new QPushButton(centralwidget);
        player_3->setObjectName(QString::fromUtf8("player_3"));
        player_3->setGeometry(QRect(60, 200, 211, 61));
        player_4 = new QPushButton(centralwidget);
        player_4->setObjectName(QString::fromUtf8("player_4"));
        player_4->setGeometry(QRect(60, 280, 211, 61));
        ShowProfileWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShowProfileWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ShowProfileWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ShowProfileWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ShowProfileWindow->setStatusBar(statusbar);

        retranslateUi(ShowProfileWindow);

        QMetaObject::connectSlotsByName(ShowProfileWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShowProfileWindow)
    {
        ShowProfileWindow->setWindowTitle(QApplication::translate("ShowProfileWindow", "MainWindow", nullptr));
        backBtn->setText(QApplication::translate("ShowProfileWindow", "back", nullptr));
        player_1->setText(QApplication::translate("ShowProfileWindow", "Player1", nullptr));
        player_2->setText(QApplication::translate("ShowProfileWindow", "Player2", nullptr));
        player_3->setText(QApplication::translate("ShowProfileWindow", "Player3", nullptr));
        player_4->setText(QApplication::translate("ShowProfileWindow", "Player4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowProfileWindow: public Ui_ShowProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPROFILEWINDOW_H
