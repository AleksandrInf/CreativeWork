#include "glwidget.h"
#include "top.h"
#include "edge.h"
#include "widget.h"
#include <QApplication>

QVector <TOP> tops;
QVector <EDGE> edges;
QVector <QVector<int>> map;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
