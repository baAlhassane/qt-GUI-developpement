#include "widget.h"
#include<QPushButton>
#include<QMenu>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QPushButton");
    resize(500,400);

    QPushButton *button=new QPushButton(this);
    button->setText("click me");
    button->setGeometry(30,30,130,130);
    button->setFont(QFont("Times",15));
    button->setIcon(QIcon(":/image-4/qt-logo-2.png"));
    button->setIconSize(QSize(30,30));
    QMenu *menu=new QMenu();
    menu->setFont(QFont("sanserif",14));
   // menu->setStyleSheet("background-color:yellow");
   // menu->setStyle("color:blue");
    menu->setStyleSheet("color: blue;" "background-color: yellow;");
    menu->addAction("copy");
    menu->addAction("cut");
    menu->addAction("paste");

    button->setMenu(menu);

}

Widget::~Widget() {}
