#include "choosemotorradwindow.h"
#include "ui_choosemotorradwindow.h"

#include <QTimer>
#include <QPainter>
#include <QStyle>
#include <QLabel>
#include <QDebug>
#include <QImage>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QFileDialog>
#include "imgbutton.h"

choosemotorradwindow::choosemotorradwindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::choosemotorradwindow)
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

    ImgButton * motor_1 = new ImgButton("");
    motor_1 ->setParent(this);
    motor_1 ->show();
    connect(motor_1, &ImgButton::clicked,[=](){
        motor_1 ->jumpDown();
        motor_1 ->jumpUp();
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

            QString path = QFileDialog::getOpenFileName(this,"loading motor1","./","(*.motordata)");
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


    ImgButton * motor_2 = new ImgButton("");
    motor_2 ->setParent(this);
    motor_2 ->show();
    connect(motor_2, &ImgButton::clicked,[=](){
        motor_2 ->jumpDown();
        motor_2 ->jumpUp();
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

            QString path = QFileDialog::getOpenFileName(this,"loading motor2","./","(*.motordata)");
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

    ImgButton * motor_3 = new ImgButton("");
    motor_3 ->setParent(this);
    motor_3 ->show();
    connect(motor_3, &ImgButton::clicked,[=](){
        motor_3 ->jumpDown();
        motor_3 ->jumpUp();
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

            QString path = QFileDialog::getOpenFileName(this,"loading motor3","./","(*.motordata)");
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

    ImgButton * motor_4 = new ImgButton("");
    motor_4 ->setParent(this);
    motor_4 ->show();
    connect(motor_4, &ImgButton::clicked,[=](){
        motor_4 ->jumpDown();
        motor_4 ->jumpUp();
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

            QString path = QFileDialog::getOpenFileName(this,"loading motor4","./","(*.motordata)");
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

choosemotorradwindow :: ~choosemotorradwindow()
{
  delete ui;
}
