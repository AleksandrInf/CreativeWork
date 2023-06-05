#ifndef FLIGHT12_H
#define FLIGHT12_H

#include <QWidget>

namespace Ui {
class Flight12;
}

class Flight12 : public QWidget
{
    Q_OBJECT

public:
    explicit Flight12(QWidget *parent = nullptr);
    ~Flight12();

signals:
    void flightScr();
    void fourthWindow();
    void flightOne();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();
    void on_Save_clicked();

    void on_View_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();


private:
    Ui::Flight12 *ui;

};

#endif // FLIGHT12_H
