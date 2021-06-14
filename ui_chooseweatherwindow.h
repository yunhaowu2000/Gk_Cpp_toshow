/********************************************************************************
** Form generated from reading UI file 'chooseweatherwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEWEATHERWINDOW_H
#define UI_CHOOSEWEATHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseweatherwindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *weather;
    QPushButton *weather_2;
    QPushButton *weather_3;
    QPushButton *backBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chooseweatherwindow)
    {
        if (chooseweatherwindow->objectName().isEmpty())
            chooseweatherwindow->setObjectName(QString::fromUtf8("chooseweatherwindow"));
        chooseweatherwindow->resize(800, 600);
        centralwidget = new QWidget(chooseweatherwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 0, 601, 231));
        weather = new QPushButton(centralwidget);
        weather->setObjectName(QString::fromUtf8("weather"));
        weather->setGeometry(QRect(10, 240, 191, 41));
        weather_2 = new QPushButton(centralwidget);
        weather_2->setObjectName(QString::fromUtf8("weather_2"));
        weather_2->setGeometry(QRect(220, 240, 191, 41));
        weather_3 = new QPushButton(centralwidget);
        weather_3->setObjectName(QString::fromUtf8("weather_3"));
        weather_3->setGeometry(QRect(430, 240, 191, 41));
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(540, 290, 113, 32));
        chooseweatherwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chooseweatherwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        chooseweatherwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(chooseweatherwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chooseweatherwindow->setStatusBar(statusbar);

        retranslateUi(chooseweatherwindow);

        QMetaObject::connectSlotsByName(chooseweatherwindow);
    } // setupUi

    void retranslateUi(QMainWindow *chooseweatherwindow)
    {
        chooseweatherwindow->setWindowTitle(QApplication::translate("chooseweatherwindow", "MainWindow", nullptr));
        weather->setText(QApplication::translate("chooseweatherwindow", "Rain", nullptr));
        weather_2->setText(QApplication::translate("chooseweatherwindow", "Snow", nullptr));
        weather_3->setText(QApplication::translate("chooseweatherwindow", "Normal", nullptr));
        backBtn->setText(QApplication::translate("chooseweatherwindow", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chooseweatherwindow: public Ui_chooseweatherwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEWEATHERWINDOW_H
