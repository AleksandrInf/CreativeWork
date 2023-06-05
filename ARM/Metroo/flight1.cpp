#include "flight1.h"
#include "ui_flight1.h"

Flight1::Flight1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flight1)
{
    ui->setupUi(this);
    flightOne1 = new Flight12();
    //подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(flightOne1, &Flight12::flightOne, this, &Flight1::show);
}

Flight1::~Flight1()
{
    delete ui;
}

void Flight1::on_pushButton_clicked()
{
    //this->close();
    emit thirdWindow();
}
void Flight1::on_pushButton_2_clicked()
{
    //this->close();
    flightOne1->show();
}

