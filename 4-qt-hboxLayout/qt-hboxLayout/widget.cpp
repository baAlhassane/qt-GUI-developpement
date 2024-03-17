#include "widget.h"
#include<QHBoxLayout>
#include<QPushButton>
#include<QVBoxLayout>
#include<QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
setWindowTitle("HVoxLayout");
resize(500,400);
QPushButton *btn1=new QPushButton(this);
btn1->setText("Click One");

QPushButton *btn2=new QPushButton(this);
btn2->setText("Click Two");

QPushButton *btn3=new QPushButton(this);
btn3->setText("Click Three");

QPushButton *btn4=new QPushButton(this);
btn4->setText("Click Four");


//QHBoxLayout *vbox=new QHBoxLayout(this);
//QBoxLayout *vbox=new QVBoxLayout(this);

/*  vbox->addWidget(btn1);
vbox->addWidget(btn2);
vbox->addWidget(btn3);
vbox->addWidget(btn4);
 */

QGridLayout *grid=new QGridLayout(this);

grid->addWidget(btn1,0,0);
grid->addWidget(btn2,0,1);
grid->addWidget(btn3,1,0);
grid->addWidget(btn4,1,1);



}

Widget::~Widget() {}
