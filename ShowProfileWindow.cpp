#include "ShowProfileWindow.h"
#include "ui_ShowProfileWindow.h"

#include <QTimer>
#include <QPainter>
#include <QStyle>
#include <QLabel>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include "imgbutton.h"

ShowProfileWindow::ShowProfileWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::ShowProfileWindow)
{
    ui->setupUi(this);
    init();

    ImgButton * backBtn = new ImgButton("");
    backBtn ->setParent(this);
    backBtn ->move(600+34,this ->height()*0.8 +60);
    backBtn ->show();
    connect(backBtn, &ImgButton::clicked,[=](){
        QTimer::singleShot(100,[=](){
            emit(backBtnClicked());
        });
    });

    ImgButton * player_1 = new ImgButton("");
    player_1 ->setParent(this);
    player_1 ->show();
    connect(player_1, &ImgButton::clicked,[=](){
        player_1 ->jumpDown();
        player_1 ->jumpUp();
        QTimer::singleShot(100,[=](){
            ItemModel = new QStandardItemModel(this);
            QStringList strList;
            strList.append("sentence1");
            strList.append("sentence2");
            strList.append("sentence3");
            strList.append("sentence4");
            strList.append("sentence5");

            int nCount = strList.size();
            for(int i = 0;i <nCount;i++)
            {
                QString string = static_cast<QString>(strList.at(i));
                QStandardItem *item = new QStandardItem(string);
                ItemModel->appendRow(item);
            }
            ui->listView->setModel(ItemModel);
            ui->listView->setFixedSize(451,501);

            connect (ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(showClick(QModelIndex)));


            QString path = QFileDialog::getOpenFileName(this,"loading Player1","./","(*.persondata)");
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

    ImgButton * player_2 = new ImgButton("");
    player_2 ->setParent(this);
    player_2 ->show();
    connect(player_2, &ImgButton::clicked,[=](){
        player_2 ->jumpDown();
        player_2 ->jumpUp();
        QTimer::singleShot(100,[=](){
            ItemModel = new QStandardItemModel(this);
            QStringList strList;
            strList.append("sentence1");
            strList.append("sentence2");
            strList.append("sentence3");
            strList.append("sentence4");
            strList.append("sentence5");

            int nCount = strList.size();
            for(int i = 0;i <nCount;i++)
            {
                QString string = static_cast<QString>(strList.at(i));
                QStandardItem *item = new QStandardItem(string);
                ItemModel->appendRow(item);
            }
            ui->listView->setModel(ItemModel);
            ui->listView->setFixedSize(451,501);

            connect (ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(showClick(QModelIndex)));

            QString path = QFileDialog::getOpenFileName(this,"loading Player2","./","(*.persondata)");
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

    ImgButton * player_3= new ImgButton("");
    player_3 ->setParent(this);
    player_3 ->show();
    connect(player_3, &ImgButton::clicked,[=](){
        player_3 ->jumpDown();
        player_3 ->jumpUp();
        QTimer::singleShot(100,[=](){
            ItemModel = new QStandardItemModel(this);
            QStringList strList;
            strList.append("sentence1");
            strList.append("sentence2");
            strList.append("sentence3");
            strList.append("sentence4");
            strList.append("sentence5");

            int nCount = strList.size();
            for(int i = 0;i <nCount;i++)
            {
                QString string = static_cast<QString>(strList.at(i));
                QStandardItem *item = new QStandardItem(string);
                ItemModel->appendRow(item);
            }
            ui->listView->setModel(ItemModel);
            ui->listView->setFixedSize(451,501);

            connect (ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(showClick(QModelIndex)));

            QString path = QFileDialog::getOpenFileName(this,"loading Player3","./","(*.persondata)");
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

    ImgButton * player_4 = new ImgButton("");
    player_4 ->setParent(this);
    player_4 ->show();
    connect(player_4, &ImgButton::clicked,[=](){
        player_4 ->jumpDown();
        player_4 ->jumpUp();
        QTimer::singleShot(100,[=](){
            ItemModel = new QStandardItemModel(this);
            QStringList strList;
            strList.append("sentence1");
            strList.append("sentence2");
            strList.append("sentence3");
            strList.append("sentence4");
            strList.append("sentence5");

            int nCount = strList.size();
            for(int i = 0;i <nCount;i++)
            {
                QString string = static_cast<QString>(strList.at(i));
                QStandardItem *item = new QStandardItem(string);
                ItemModel->appendRow(item);
            }
            ui->listView->setModel(ItemModel);
            ui->listView->setFixedSize(451,501);

            connect (ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(showClick(QModelIndex)));

            QString path = QFileDialog::getOpenFileName(this,"loading Player4","./","(*.persondata)");
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
void ShowProfileWindow::showClick(QModelIndex index){
    QString strTemp;
    strTemp = index.data().toString();

    QMessageBox msg;
    msg.setText(strTemp);
    msg.exec();


}

ShowProfileWindow :: ~ShowProfileWindow()
{
  delete ui;
}
