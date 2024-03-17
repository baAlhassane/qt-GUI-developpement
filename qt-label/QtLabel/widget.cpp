#include "widget.h"
#include<QLabel>
#include<QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QLabel * label=new QLabel(this);
      resize(500,400);

    //label->setPixmap(QPixmap(":/qt-logo.png"));

   //label->setPixmap(QPixmap(":/sky-express.jpg"));
    QMovie *movie=new QMovie(":/giphy.gif");
    label->setMovie(movie);
    movie->start();


}

Widget::~Widget() {}
