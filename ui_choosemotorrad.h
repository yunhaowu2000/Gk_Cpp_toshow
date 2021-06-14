/********************************************************************************
** Form generated from reading UI file 'choosemotorrad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEMOTORRAD_H
#define UI_CHOOSEMOTORRAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosemotorradwindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *backBtn;
    QPushButton *motor_1;
    QPushButton *motor_2;
    QPushButton *motor_3;
    QPushButton *motor_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *choosemotorradwindow)
    {
        if (choosemotorradwindow->objectName().isEmpty())
            choosemotorradwindow->setObjectName(QString::fromUtf8("choosemotorradwindow"));
        choosemotorradwindow->resize(815, 490);
        centralwidget = new QWidget(choosemotorradwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(290, 0, 501, 371));
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(690, 400, 113, 32));
        motor_1 = new QPushButton(centralwidget);
        motor_1->setObjectName(QString::fromUtf8("motor_1"));
        motor_1->setGeometry(QRect(60, 30, 171, 61));
        motor_2 = new QPushButton(centralwidget);
        motor_2->setObjectName(QString::fromUtf8("motor_2"));
        motor_2->setGeometry(QRect(60, 110, 171, 61));
        motor_3 = new QPushButton(centralwidget);
        motor_3->setObjectName(QString::fromUtf8("motor_3"));
        motor_3->setGeometry(QRect(60, 190, 171, 61));
        motor_4 = new QPushButton(centralwidget);
        motor_4->setObjectName(QString::fromUtf8("motor_4"));
        motor_4->setGeometry(QRect(60, 270, 171, 61));
        choosemotorradwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(choosemotorradwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 815, 24));
        choosemotorradwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(choosemotorradwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        choosemotorradwindow->setStatusBar(statusbar);

        retranslateUi(choosemotorradwindow);

        QMetaObject::connectSlotsByName(choosemotorradwindow);
    } // setupUi

    void retranslateUi(QMainWindow *choosemotorradwindow)
    {
        choosemotorradwindow->setWindowTitle(QApplication::translate("choosemotorradwindow", "MainWindow", nullptr));
        backBtn->setText(QApplication::translate("choosemotorradwindow", "back", nullptr));
        motor_1->setText(QApplication::translate("choosemotorradwindow", "Alpha", nullptr));
        motor_2->setText(QApplication::translate("choosemotorradwindow", "Beta", nullptr));
        motor_3->setText(QApplication::translate("choosemotorradwindow", "Charlie", nullptr));
        motor_4->setText(QApplication::translate("choosemotorradwindow", "David", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosemotorradwindow: public Ui_choosemotorradwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEMOTORRAD_H
