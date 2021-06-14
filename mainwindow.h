#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chooseweatherwindow.h"
#include "choosemotorradwindow.h"
#include "ShowProfileWindow.h"
#include "PlayWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    PlayWindow * playWindow = NULL;
    chooseweatherwindow * chooseWeather = NULL;
    choosemotorradwindow * chooseMotorrad = NULL;
    ShowProfileWindow * showProfile = NULL;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent*);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
