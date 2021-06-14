#include "PlayWindow.h"
#include "ui_PlayWindow.h"

#include <QTimer>
#include <QPainter>
#include <QMessageBox>
#include <QDebug>
#include <QStack>
#include <QPair>
#include <QKeyEvent>
#include <QPropertyAnimation>
#include "imgbutton.h"

PlayWindow::PlayWindow(QString dataPath):
    QMainWindow(dataPath),
    ui(new Ui::PlayWindow)
{
    ui->setupUi(this);
}

PlayWindow ::~PlayWindow()
{
    delete ui;
}
