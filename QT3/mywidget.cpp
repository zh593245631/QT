#include "mywidget.h"
#include<QPushButton>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{

    b1.setParent(this);
    b1.setText("close");
    b1.move(100,100);

    b2 = new QPushButton(this);
    b2->setText("haha");

    connect(&b1, &QPushButton::pressed, this,&MyWidget::close);
    connect(b2,&QPushButton::released,this,&MyWidget::mySlot);
    connect(b2,&QPushButton::released,&b1,&MyWidget::hide);

    setWindowTitle("老大");
    b3.setParent(this);
    b3.setText("切换");
    b3.move(50,50);

   // w.show();
    connect(&b3,&QPushButton::released,this,&MyWidget::changeWin);

    connect(&w,&SubWidget::mySignal,this,&MyWidget::dealSub);

    resize(300,400);

}
void MyWidget::mySlot()
{
    b2->setText("哈哈");
}
void MyWidget::changeWin()
{
    w.show();

    this->hide();
}
void MyWidget::dealSub()
{
    w.hide();
    this->show();
}
MyWidget::~MyWidget()
{

}
