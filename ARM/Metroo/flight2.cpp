#include "flight2.h"
#include "ui_flight2.h"

Flight2::Flight2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flight2)
{
    ui->setupUi(this);
    flightTwo1 = new Flight22();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(flightTwo1, &Flight22::flightTwo, this, &Flight2::show);
}
Flight2::~Flight2()
{
    delete ui;
}
void Flight2::on_pushButton_clicked()
{
    this->close();
    emit thirdWindow();
}
void Flight2::on_pushButton_2_clicked()
{
    this->close();
    flightTwo1->show();
}

