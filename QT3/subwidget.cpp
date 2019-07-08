#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("小弟");
    b.setParent(this);
    b.setText("切换");

    connect(&b,&QPushButton::clicked,this,&SubWidget::sendSlot);
}

void SubWidget::sendSlot()
{
    emit mySignal();
}
