#ifndef FLIGHT2_H
#define FLIGHT2_H

#include <QWidget>
#include <flight22.h>

namespace Ui {
class Flight2;
}

class Flight2 : public QWidget
{
    Q_OBJECT

public:
    explicit Flight2(QWidget *parent = nullptr);
    ~Flight2();

signals:
    void thirdWindow();
    void flight12();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::Flight2 *ui;
    Flight22 *flightTwo1;
};

#endif // FLIGHT2_H
