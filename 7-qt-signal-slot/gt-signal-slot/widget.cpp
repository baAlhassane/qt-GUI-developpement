#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("window");
    resize(500,400);
    QPushButton *btn1=new QPushButton(this);
    btn1->setText("change Text");

    connect(btn1,SIGNAL(clicked()), this,SLOT(changeText()));

    label=new QLabel(this);
    label->setText("Hello");

    QHBoxLayout *hbox=new QHBoxLayout(this);

    hbox->addWidget(btn1);
    hbox->addWidget(label);
}

void Widget::changeText(){
    label->setText("this is slot");
    label->setFont(QFont("Times",14));
    label->setStyleSheet("color:red");

}

Widget::~Widget() {}
