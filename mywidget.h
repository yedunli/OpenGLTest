#ifndef MYWIDGET_H
#define MYWIDGET_H
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include"subwidget.h"

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = 0);
    ~MyWidget();
    void SomeFunc();
    void setSubWidget(SubWidget* subwidget);
private:
    QPushButton button;
    QLabel label;
    SubWidget* subwidget;

private:
    void printHelloWorld();
    void HandSignle(int value, QString name);
    void HandSignle1();
};

#endif // MYWIDGET_H
