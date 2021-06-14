#ifndef PLAYWINDOW_H
#define PLAYWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui{
class PlayWindow;
}
class PlayWindow : public QMainWindow
{
    Q_OBJECT
public:
    PlayWindow(QString dataPath);
    ~ PlayWindow();

    void paintEvent(QPaintEvent *);
private:
    Ui::PlayWindow *ui;
signals:
    void backBtnClicked();
};
#endif // PLAYWINDOW_H
