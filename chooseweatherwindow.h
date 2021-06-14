#ifndef CHOOSEWEATHERWINDOW_H
#define CHOOSEWEATHERWINDOW_H

#include <QMainWindow>
#include "PlayWindow.h"

namespace Ui {
class chooseweatherwindow;
}

class chooseweatherwindow : public QMainWindow
{
    Q_OBJECT

public:
    PlayWindow * playWindow = NULL;

    explicit chooseweatherwindow(QWidget *parent = nullptr);
    ~ chooseweatherwindow();

    void paintEvent(QPaintEvent *);

private:
    Ui:: chooseweatherwindow *ui;
    QImage *image;
signals:
    void backBtnClicked();
    void on_slotOpenImage_triggered();

};
#endif // CHOOSEWEATHERWINDOW_H
