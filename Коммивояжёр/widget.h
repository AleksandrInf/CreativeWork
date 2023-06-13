#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include "graphs.h"
#include "glwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GlWidget; }
QT_END_NAMESPACE
#include <QMainWindow>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    GlWidget* openGlW;
protected:
    /* Определяем виртуальный метод родительского класса
     * для отрисовки содержимого виджета
     * */
    void paintEvent(QPaintEvent *event);
    void refresh(int capacity);
    void calc(Graph graph);
    QString getSVGLines(Graph graph);
    QString getSVGVertexes(Graph graph);
    Graph getGraph();
    bool allLinesIsNull();

private slots:
    void on_radioButton_6_clicked();
    void on_radioButton_8_clicked();
    void on_radioButton_10_clicked();
    void on_radioButton_12_clicked();
    void on_pushButton_add_clicked();
    void on_pushButton_lounch_clicked();
    void on_Btn_Calculate_clicked();
    void on_Btn_Add_Top_clicked();
    void on_Batton_Delete_clicked();

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H
