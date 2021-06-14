#ifndef IMGBUTTON_H
#define IMGBUTTON_H

#include <QPushButton>

class ImgButton : public QPushButton
{
     Q_OBJECT
public:
    QString noramlImgPath;
    QString pushedImgPath;

    ImgButton(QString noramlImgPath, QString pushedImgPath = "");

    void jumpUp();
    void jumpDown();
    void mousePressEvent(QMouseEvent *);
    void mousereleaseEvent(QMouseEvent *);

private:
signals:
};
#endif // IMGBUTTON_H
