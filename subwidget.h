#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QDebug>

class SubWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = nullptr);

signals:
    void SSignals(int, QString);
    void SSignals();
public slots:
    void sendSinals();
private :
    QPushButton button;
    QLabel label;
};

#endif // SUBWIDGET_H
