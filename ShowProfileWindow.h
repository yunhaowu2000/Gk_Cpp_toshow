#ifndef PROFILEWINDOW_H
#define PROFILEWINDOW_H
#include <QMainWindow>
#include "PlayWindow.h"
#include <QStringListModel>
#include <QStandardItemModel>
#include <QModelIndex>

namespace Ui {
class ShowProfileWindow;
}

class ShowProfileWindow : public QMainWindow
{
    Q_OBJECT

public:
    PlayWindow * playWindow = NULL;

    explicit ShowProfileWindow(QWidget *parent = nullptr);
    ~ ShowProfileWindow();

    void paintEvent(QPaintEvent *);

private:
    Ui:: ShowProfileWindow *ui;

public:
    QStringListModel *Model;
    QStandardItemModel *ItemModel;
    void init();

private:
    void showClick(QModelIndex index);
signals:
    void backBtnClicked();

};
#endif // PROFILEWINDOW_H
