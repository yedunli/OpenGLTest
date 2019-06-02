#include "mywidget.h"
#include<QDebug>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("大哥");
    resize(500, 400);
    label.setParent(this);
    label.setText("AAA");
    //label.show();
       label.hide();
    button.setParent(this);
    button.setText("Close SubWindow");
    button.move(225,0);

    //connect(&button, &QPushButton::pressed, this, &MyWidget::printHelloWorld);
    //connect(&button, &QPushButton::pressed, this, &MyWidget::close);
    //connect(&button, &QPushButton::released, &label, &QLabel::show);

    QPushButton* b4 = new QPushButton(this);
    b4->setText("Fuck");
    b4->move(150,150);
    connect(b4, &QPushButton::clicked, [=](bool flag){
        b4->setText("RRR");
        qDebug()<<flag;
    });

}

void MyWidget::printHelloWorld()
{
    qDebug()<<"Hello, world";
}
void MyWidget::SomeFunc()
{
    this->hide();
    subwidget->show();
}

void MyWidget::setSubWidget(SubWidget* subwidget)
{
    this->subwidget = subwidget;
    connect(&button, &QPushButton::pressed, this, &MyWidget::SomeFunc);

    void (SubWidget::*Noanme)() = &SubWidget::SSignals;
      connect(subwidget, Noanme, this, &MyWidget::HandSignle1);
     //connect(subwidget, &SubWidget::SSignals, this, &MyWidget::HandSignle1);

    void (SubWidget::*Other)(int, QString) = &SubWidget::SSignals;
   connect(subwidget, Other, this, &MyWidget::HandSignle);
}

void MyWidget::HandSignle1()
{
    qDebug() << " AAAAAAAAAAA";
}
void MyWidget::HandSignle(int value, QString name)
{
    qDebug()<< value << "  " + name ;
    this->show();
    subwidget->hide();
}


MyWidget::~MyWidget()
{

}
