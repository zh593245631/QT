#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QPushButton>
#include"subwidget.h"
class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
    void mySlot();
    void changeWin();
    void dealSub();
private:
    QPushButton b1;
    QPushButton* b2;
    QPushButton b3;

    SubWidget w;
};

#endif // MYWIDGET_H
