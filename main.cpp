#include "mywidget.h"
#include "subwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;

    w.show();

    SubWidget w2;
    w2.show();

    w.setSubWidget(&w2);
    return a.exec();
}
