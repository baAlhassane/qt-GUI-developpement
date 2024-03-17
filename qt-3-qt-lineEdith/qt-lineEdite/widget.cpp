#include "widget.h"
#include "./ui_widget.h"
#include<QLineEdit>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(500,400);
    setWindowTitle("QLineEdit");
    QLineEdit *lineEdit =new QLineEdit(this);
    lineEdit->setGeometry(20,20,250,50);
    lineEdit->setFont(QFont("Times",14));
   // lineEdit->setEnabled(false);
    lineEdit->setEchoMode(QLineEdit::EchoMode::Password);;

}

Widget::~Widget()
{
    delete ui;
}
