#ifndef FLIGHT1_H
#define FLIGHT1_H

#include <QWidget>
#include <flight12.h>

namespace Ui {
class Flight1;
}

class Flight1 : public QWidget
{
    Q_OBJECT

public:
    explicit Flight1(QWidget *parent = nullptr);
    ~Flight1();

signals:
    void thirdWindow();
    void flight12();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::Flight1 *ui;
    Flight12 *flightOne1;
};
#endif // FLIGHT1_H
