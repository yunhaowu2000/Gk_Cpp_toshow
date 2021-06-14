#include "imgbutton.h"

#include <QDebug>
#include <QPropertyAnimation>

ImgButton:: ImgButton(QString normalimgPath, QString pushedImgPath)
{
    this->noramlImgPath = normalimgPath;
    this->pushedImgPath = pushedImgPath;
    QPixmap pix;
    if (!pix.load(normalimgPath))
    {
        qDebug()<<"Loading Failed";
        return;
    }

    setFixedSize(pix.width(),pix.height());
    setStyleSheet("QPushButton{border:0px}");
    setIcon(QIcon(pix));
    setIconSize(QSize(pix.width(),pix.height()));

}

void ImgButton :: mousePressEvent(QMouseEvent *e)
{
    QPixmap pix;
    if(pushedImgPath != "")
    {
        qDebug()<<pushedImgPath<<"Loading Failed";
        return;

    }
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    setIcon(QIcon(pix));
    setIconSize(QSize(pix.width(),pix.height()));

    QPushButton::mousePressEvent(e);
}

void ImgButton :: mousereleaseEvent(QMouseEvent *e)
{
    QPixmap pix;
    if(pushedImgPath != "")
    {
        qDebug()<<pushedImgPath<<"Loading Failed";
        return;

    }
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    setIcon(QIcon(pix));
    setIconSize(QSize(pix.width(),pix.height()));

    QPushButton::mousePressEvent(e);
}

void ImgButton::jumpDown()
{
    QPropertyAnimation * anima = new QPropertyAnimation(this,"geometry");
    anima -> setDuration(100);
    anima -> setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    anima -> setEndValue(QRect(this->x(),this->y()+6,this->width(),this->height()));
    anima -> start();
}

void ImgButton :: jumpUp()
{
    QPropertyAnimation * anima = new QPropertyAnimation(this,"geometry");
    anima -> setDuration(100);
    anima -> setStartValue(QRect(this->x(),this->y()+6,this->width(),this->height()));
    anima -> setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    anima -> start();
}
