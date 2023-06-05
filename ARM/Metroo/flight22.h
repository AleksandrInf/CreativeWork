#ifndef FLIGHT22_H
#define FLIGHT22_H

#include <QWidget>

namespace Ui {
class Flight22;
}

class Flight22 : public QWidget
{
    Q_OBJECT

public:
    explicit Flight22(QWidget *parent = nullptr);
    ~Flight22();

signals:
    void flightOb();
    void fourthWindow();
    void flight22();
    void flightTwo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Flight22 *ui;
};

#endif // FLIGHT22_H
