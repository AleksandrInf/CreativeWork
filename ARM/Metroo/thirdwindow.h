#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QWidget>
#include <flight1.h>
#include <flight2.h>

namespace Ui {
class ThirdWindow;
}

class ThirdWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ThirdWindow(QWidget *parent = nullptr);
    ~ThirdWindow();

signals:
    void firstWindow();
    void secondWindow();
    void thirdWindow();
    void flight1();
    void flight2();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::ThirdWindow *ui;
    Flight1 *flight11;
    Flight2 *flight12;
};

#endif // THIRDWINDOW_H
