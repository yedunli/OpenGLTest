#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    resize(500, 400);
        setWindowTitle("小弟");
    label.setParent(this);
    label.setText("SubWindow");
    button.setParent(this);

    button.move(100, 100);
    button.setText("Change");
    //connect(&button, &QPushButton::released, &label, &QLabel::show);

    connect(&button, &QPushButton::pressed, this, &SubWidget::sendSinals);
}

void SubWidget::sendSinals()
{
   emit  SSignals(123, "我恨你!");
    emit SSignals();
}
