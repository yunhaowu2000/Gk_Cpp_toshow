#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPainter>
#include <QTimer>
#include <QMessageBox>
#include "imgbutton.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    chooseWeather = new chooseweatherwindow;
    chooseMotorrad = new choosemotorradwindow;
    showProfile = new ShowProfileWindow;
    playWindow = new PlayWindow;

    ImgButton * PlayWindow = new ImgButton("");
    PlayWindow -> setParent(this);
    PlayWindow -> move(80+9,this->height()*0.8);
    PlayWindow -> show();
    connect(PlayWindow, &ImgButton::clicked ,[=](){
        PlayWindow ->jumpDown();
        PlayWindow ->jumpUp();

        QTimer::singleShot(300,this,[=](){
            this->hide();
            playWindow -> setGeometry(this -> geometry());
            playWindow -> show();
        });

    });

    ImgButton * choosemotorradwindow = new ImgButton("");
    choosemotorradwindow -> setParent(this);
    choosemotorradwindow -> move(80+9,this->height()*0.8);
    choosemotorradwindow -> show();
    connect(choosemotorradwindow, &ImgButton::clicked ,[=](){
        choosemotorradwindow ->jumpDown();
        choosemotorradwindow ->jumpUp();

        QTimer::singleShot(300,this,[=](){
            this->hide();
            playWindow -> setGeometry(this -> geometry());
            playWindow -> show();
        });
     });


        ImgButton * chooseweatherwindow = new ImgButton("");
        chooseweatherwindow -> setParent(this);
        chooseweatherwindow -> move(80+9,this->height()*0.8);
        chooseweatherwindow -> show();
        connect(chooseweatherwindow, &ImgButton::clicked ,[=](){
            chooseweatherwindow ->jumpDown();
            chooseweatherwindow ->jumpUp();

            QTimer::singleShot(300,this,[=](){
                this->hide();
                playWindow -> setGeometry(this -> geometry());
                playWindow -> show();
            });

    });

        ImgButton * ShowProfileWindow = new ImgButton("");
        ShowProfileWindow -> setParent(this);
        ShowProfileWindow -> move(80+9,this->height()*0.8);
        ShowProfileWindow -> show();
        connect(ShowProfileWindow, &ImgButton::clicked ,[=](){
            ShowProfileWindow ->jumpDown();
            ShowProfileWindow ->jumpUp();

            QTimer::singleShot(300,this,[=](){
                this->hide();
                playWindow -> setGeometry(this -> geometry());
                playWindow -> show();
            });

    });






}

MainWindow::~MainWindow()
{
    delete ui;
}

