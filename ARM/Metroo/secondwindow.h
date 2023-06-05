#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QWidget>
#include <thirdwindow.h>
#include <fourthwindow.h>
#include <fifthwindow.h>


namespace Ui {
class SecondWindow;
}

class SecondWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

signals:
    void firstWindow();
    void secondWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::SecondWindow *ui;
    ThirdWindow *thirdWindow;
    FourthWindow *fourthWindow;
    FifthWindow *fifthWindow;
};

#endif // SECONDWINDOW_H
