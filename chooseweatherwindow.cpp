#include "chooseweatherwindow.h"
#include "ui_chooseweatherwindow.h"

#include <QTimer>
#include <QPainter>
#include <QLabel>
#include <QStyle>
#include <QDebug>
#include <QImage>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QFileDialog>
#include "imgbutton.h"

chooseweatherwindow::chooseweatherwindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::chooseweatherwindow)
{
    ui->setupUi(this);

    ImgButton * backBtn = new ImgButton("");
    backBtn ->setParent(this);
    backBtn ->move(600+34,this ->height()*0.8 +60);
    backBtn ->show();
    connect(backBtn, &ImgButton::clicked,[=](){
        QTimer::singleShot(100,[=](){
            emit(backBtnClicked());
        });
    });

    ImgButton * weather_1 = new ImgButton("");
    weather_1 ->setParent(this);
    weather_1 ->show();
    connect(weather_1, &ImgButton::clicked,[=](){
        weather_1 ->jumpDown();
        weather_1 ->jumpUp();
        QTimer::singleShot(100,[=](){
            this->image = new QImage;
            QString fileName = QFileDialog::getOpenFileName(this,"loading picture",".","Image files (*.jpg,*png);;All files(*.*)");
            if (fileName != ""){
                if(image -> load(fileName))
                {
                    QGraphicsScene *scene = new QGraphicsScene;
                    scene -> addPixmap(QPixmap::fromImage(*image));
                    ui->graphicsView->setScene(scene);
                    ui->graphicsView->resize(image->width()+10,image ->height()+10);
                    ui->graphicsView->show();
                }
            }

            QString path = QFileDialog::getOpenFileName(this,"loading rain","./","(*.weatherdata)");
            if (path!= NULL){
                this->hide();
                playWindow =new PlayWindow(path);
                playWindow -> setGeometry(this ->geometry());
                playWindow -> show();


                connect(playWindow, &PlayWindow::backBtnClicked,[=](){
                    playWindow ->hide();
                    setGeometry(playWindow->geometry());
                    delete playWindow;
                    playWindow = NULL;
                    this ->show();


                });
            }
        });
    });

    ImgButton * weather_2 = new ImgButton("");
    weather_2 ->setParent(this);
    weather_2 ->show();
    connect(weather_2, &ImgButton::clicked,[=](){
        weather_2 ->jumpDown();
        weather_2 ->jumpUp();
        QTimer::singleShot(100,[=](){
            this->image = new QImage;
            QString fileName = QFileDialog::getOpenFileName(this,"loading picture",".","Image files (*.jpg,*png);;All files(*.*)");
            if (fileName != ""){
                if(image -> load(fileName))
                {
                    QGraphicsScene *scene = new QGraphicsScene;
                    scene -> addPixmap(QPixmap::fromImage(*image));
                    ui->graphicsView->setScene(scene);
                    ui->graphicsView->resize(image->width()+10,image ->height()+10);
                    ui->graphicsView->show();
                }
            }

            QString path = QFileDialog::getOpenFileName(this,"loading snow","./","(*.weatherdata)");
            if (path!= NULL){
                this->hide();
                playWindow =new PlayWindow(path);
                playWindow -> setGeometry(this ->geometry());
                playWindow -> show();


                connect(playWindow, &PlayWindow::backBtnClicked,[=](){
                    playWindow ->hide();
                    setGeometry(playWindow->geometry());
                    delete playWindow;
                    playWindow = NULL;
                    this ->show();


                });
            }
        });
    });

    ImgButton * weather_3 = new ImgButton("");
    weather_3 ->setParent(this);
    weather_3 ->show();
    connect(weather_3, &ImgButton::clicked,[=](){
        weather_3 ->jumpDown();
        weather_3 ->jumpUp();
        QTimer::singleShot(100,[=](){
            this->image = new QImage;
            QString fileName = QFileDialog::getOpenFileName(this,"loading picture",".","Image files (*.jpg,*png);;All files(*.*)");
            if (fileName != ""){
                if(image -> load(fileName))
                {
                    QGraphicsScene *scene = new QGraphicsScene;
                    scene -> addPixmap(QPixmap::fromImage(*image));
                    ui->graphicsView->setScene(scene);
                    ui->graphicsView->resize(image->width()+10,image ->height()+10);
                    ui->graphicsView->show();
                }
            }

            QString path = QFileDialog::getOpenFileName(this,"loading normal","./","(*.weatherdata)");
            if (path!= NULL){
                this->hide();
                playWindow =new PlayWindow(path);
                playWindow -> setGeometry(this ->geometry());
                playWindow -> show();


                connect(playWindow, &PlayWindow::backBtnClicked,[=](){
                    playWindow ->hide();
                    setGeometry(playWindow->geometry());
                    delete playWindow;
                    playWindow = NULL;
                    this ->show();


                });
            }
        });
    });


}

chooseweatherwindow ::~chooseweatherwindow()
{
    delete ui;
    delete image;
}
