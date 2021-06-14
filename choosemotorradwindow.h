#ifndef CHOOSEMOTORRADWINDOW_H
#define CHOOSEMOTORRADWINDOW_H

#include <QMainWindow>
#include "PlayWindow.h"

namespace Ui {
class choosemotorradwindow;
}

class choosemotorradwindow : public QMainWindow
{
    Q_OBJECT

public:

    PlayWindow * playWindow = NULL;

    explicit choosemotorradwindow(QWidget *parent = nullptr);
    ~ choosemotorradwindow();

    void paintEvent(QPaintEvent *);

private:
    Ui:: choosemotorradwindow *ui;
    QImage *image;
signals:
    void backBtnClicked();
    void on_slotOpenImage_triggered();
};
#endif // CHOOSEMOTORRADWINDOW_H
