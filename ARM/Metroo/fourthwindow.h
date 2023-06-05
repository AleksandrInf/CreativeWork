#ifndef FOURTHWINDOW_H
#define FOURTHWINDOW_H

#include <QWidget>
#include <flight22.h>
#include <flight12.h>

namespace Ui {
class FourthWindow;
}

class FourthWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FourthWindow(QWidget *parent = nullptr);
    ~FourthWindow();

signals:
    void firstWindow();
    void secondWindow();
    void flightScr();
    void flightOb();
    void fourthWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::FourthWindow *ui;
    Flight12 *flightScore;
    Flight22 *flightObich;

};

#endif // FOURTHWINDOW_H
