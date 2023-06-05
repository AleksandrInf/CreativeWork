#include "flight22.h"
#include "ui_flight22.h"
#include<QMessageBox>


Flight22::Flight22(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flight22)
{
    ui->setupUi(this);
}
Flight22::~Flight22()
{
    delete ui;
}
void Flight22::on_pushButton_clicked()
{
    this->close();
    emit fourthWindow();
}
void Flight22::on_pushButton_2_clicked()
{
    this->close();
    emit flightTwo();
}
void Flight22::on_pushButton_5_clicked()
{
    if((ui->rad1->isChecked()) && (ui->rad6->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 50руб");
    }
    if((ui->rad1->isChecked()) && (ui->rad7->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 100руб");
    }
    if((ui->rad1->isChecked()) && (ui->rad8->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 140руб");
    }
    if((ui->rad2->isChecked()) && (ui->rad5->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 50руб");
    }
    if((ui->rad2->isChecked()) && (ui->rad7->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 50руб");
    }
    if((ui->rad2->isChecked()) && (ui->rad8->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 90руб");
    }
    if((ui->rad3->isChecked()) && (ui->rad5->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 100руб");
    }
    if((ui->rad3->isChecked()) && (ui->rad6->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 50руб");
    }
    if((ui->rad3->isChecked()) && (ui->rad8->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 40руб");
    }
    if((ui->rad4->isChecked()) && (ui->rad5->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 140руб");
    }
    if((ui->rad4->isChecked()) && (ui->rad6->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 90руб");
    }
    if((ui->rad4->isChecked()) && (ui->rad7->isChecked())) {
        QMessageBox::information(this, "Стоимость", "К оплате 40руб");
    }
}
void Flight22::on_pushButton_4_clicked()
{
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 10:20, Выберете конечную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad6->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50");
    }
    if((ui->rad1->isChecked()) && (ui->rad7->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 10:20->11:20");
    }
    if((ui->rad1->isChecked()) && (ui->rad8->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 10:20->11:40");
    }
    if((ui->rad2->isChecked()) && (ui->rad7->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50");
    }
    if((ui->rad2->isChecked()) && (ui->rad8->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50");
    }
    if((ui->rad3->isChecked()) && (ui->rad8->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50");
    }
//-1
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 12:30, Выберете конечную остановку");
    }
    if((ui->rad2->isChecked()) && (ui->rad5->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 13:20->13:50");
    }
    if((ui->rad3->isChecked()) && (ui->rad5->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 12:50->13:50");
    }
    if((ui->rad3->isChecked()) && (ui->rad6->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 12:50->13:20");
    }
    if((ui->rad4->isChecked()) && (ui->rad5->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 12:30->13:50");
    }
    if((ui->rad4->isChecked()) && (ui->rad6->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 12:30->13:20");
    }
    if((ui->rad4->isChecked()) && (ui->rad7->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 12:30->12:50");
    }
//2
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 14:40, Выберете конечную остановку");
    }
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 16:00, Выберете посадочную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad6->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 14:40->15:10");
    }
    if((ui->rad1->isChecked()) && (ui->rad7->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 14:40->15:40");
    }
    if((ui->rad1->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 14:40->16:00");
    }
    if((ui->rad2->isChecked()) && (ui->rad7->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 15:10->15:40");
    }
    if((ui->rad2->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 15:10->16:00");
    }
    if((ui->rad3->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 15:40->16:00");
    }
//-2
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 16:50, Выберете конечную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 18:10, Выберете посадочную остановку");
    }
    if((ui->rad2->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 17:40->18:10");
    }
    if((ui->rad3->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 17:10->18:10");
    }
    if((ui->rad3->isChecked()) && (ui->rad6->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 17:10->17:40");
    }
    if((ui->rad4->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 16:50->18:10");
    }
    if((ui->rad4->isChecked()) && (ui->rad6->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 16:50->17:40");
    }
    if((ui->rad4->isChecked()) && (ui->rad7->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 16:50->17:10");
    }
//3
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 19:00, Выберете конечную остановку");
    }
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 20:20, Выберете посадочную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad6->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 19:00->19:30");
    }
    if((ui->rad1->isChecked()) && (ui->rad7->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 19:00->20:00");
    }
    if((ui->rad1->isChecked()) && (ui->rad8->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 19:00->20:20");
    }
    if((ui->rad2->isChecked()) && (ui->rad7->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 19:30->20:00");
    }
    if((ui->rad2->isChecked()) && (ui->rad8->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 19:30->20:20");
    }
    if((ui->rad3->isChecked()) && (ui->rad8->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 20:00->20:20");
    }

    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 21:10, Выберете конечную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 22:30, Выберете посадочную остановку");
    }
    if((ui->rad2->isChecked()) && (ui->rad5->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 22:00->22:30");
    }
    if((ui->rad3->isChecked()) && (ui->rad5->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 21:30->22:00");
    }
    if((ui->rad3->isChecked()) && (ui->rad6->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 21:30->22:30");
    }
    if((ui->rad4->isChecked()) && (ui->rad5->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 21:10->22:30");
    }
    if((ui->rad4->isChecked()) && (ui->rad6->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 21:10->22:00");
    }
    if((ui->rad4->isChecked()) && (ui->rad7->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 21:10->21:30");
    }
}
void Flight22::on_pushButton_3_clicked()
{
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 10:20, Выберете конечную остановку");
    }
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 11:40, Выберете посадочную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad6->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50"
                                                        "Цена поездки 60 рублей");
    }
    if((ui->rad1->isChecked()) && (ui->rad7->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 10:20->11:20"
                                                        "Цена поездки 120 рублей");
    }
    if((ui->rad1->isChecked()) && (ui->rad8->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 10:20->11:40"
                                                        "Цена поездки 170 рублей");
    }
    if((ui->rad2->isChecked()) && (ui->rad7->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50"
                                                        "Цена поездки 60 рублей");
    }
    if((ui->rad2->isChecked()) && (ui->rad8->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50"
                                                        "Цена поездки 60 рублей");
    }
    if((ui->rad3->isChecked()) && (ui->rad8->isChecked()) && (ui->rad10->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 10:20->10:50"
                                                        "Цена поездки 50 рублей");
    }
//-1
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 12:30, Выберете конечную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 13:50, Выберете посадочную остановку");
    }
    if((ui->rad2->isChecked()) && (ui->rad5->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 13:20->13:50, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad3->isChecked()) && (ui->rad5->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 12:50->13:50, "
                                                        "Цена поездки 120 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad3->isChecked()) && (ui->rad6->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 12:50->13:20, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad4->isChecked()) && (ui->rad5->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 12:30->13:50, "
                                                        "Цена поездки 170 рублей, "
                                                        "Количество остановок 2");
    }
    if((ui->rad4->isChecked()) && (ui->rad6->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 12:30->13:20, "
                                                        "Цена поездки 110 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad4->isChecked()) && (ui->rad7->isChecked()) && (ui->rad11->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 12:30->12:50, "
                                                        "Цена поездки 50 рублей, "
                                                        "Количество остановок 0");
    }
//2
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 14:40, Выберете конечную остановку");
    }
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 16:00, Выберете посадочную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad6->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 14:40->15:10, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad1->isChecked()) && (ui->rad7->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 14:40->15:40, "
                                                        "Цена поездки 120 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad1->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 14:40->16:00, "
                                                        "Цена поездки 170 рублей, "
                                                        "Количество остановок 2");
    }
    if((ui->rad2->isChecked()) && (ui->rad7->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 15:10->15:40, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad2->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 15:10->16:00, "
                                                        "Цена поездки 110 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad3->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 15:40->16:00, "
                                                        "Цена поездки 50 рублей, "
                                                        "Количество остановок 0");
    }
//-2
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 16:50, Выберете конечную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 18:10, Выберете посадочную остановку");
    }
    if((ui->rad2->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 17:40->18:10, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad3->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 17:10->18:10, "
                                                        "Цена поездки 120 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad3->isChecked()) && (ui->rad6->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 17:10->17:40, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad4->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 16:50->18:10, "
                                                        "Цена поездки 170 рублей, "
                                                        "Количество остановок 2");
    }
    if((ui->rad4->isChecked()) && (ui->rad6->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 16:50->17:40, "
                                                        "Цена поездки 110 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad4->isChecked()) && (ui->rad7->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 16:50->17:10, "
                                                        "Цена поездки 50 рублей, "
                                                        "Количество остановок 0");
    }
//3
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 19:00, Выберете конечную остановку");
    }
    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad12->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 20:20, Выберете посадочную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad6->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 19:00->19:30, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad1->isChecked()) && (ui->rad7->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 19:00->20:00, "
                                                        "Цена поездки 120 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad1->isChecked()) && (ui->rad8->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 19:00->20:20, "
                                                        "Цена поездки 170 рублей, "
                                                        "Количество остановок 2");
    }
    if((ui->rad2->isChecked()) && (ui->rad7->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 19:30->20:00, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad2->isChecked()) && (ui->rad8->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 19:30->20:20, "
                                                        "Цена поездки 110 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad3->isChecked()) && (ui->rad8->isChecked()) && (ui->rad14->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 20:00->20:20, "
                                                        "Цена поездки 50 рублей, "
                                                        "Количество остановок 0");
    }

    if((ui->rad4->isChecked()) && (ui->rad8->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Отбытие в 21:10, Выберете конечную остановку");
    }
    if((ui->rad1->isChecked()) && (ui->rad5->isChecked()) && (ui->rad13->isChecked())) {
        QMessageBox::information(this, "Время поезкди", "Прибытие в 22:30, Выберете посадочную остановку");
    }
    if((ui->rad2->isChecked()) && (ui->rad5->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 22:00->22:30, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad3->isChecked()) && (ui->rad5->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 30 минут, 21:30->22:00, "
                                                        "Цена поездки 60 рублей, "
                                                        "Количество остановок 0");
    }
    if((ui->rad3->isChecked()) && (ui->rad6->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час, 21:30->22:30, "
                                                        "Цена поездки 120 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad4->isChecked()) && (ui->rad5->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 1 час 20 минут, 21:10->22:30, "
                                                        "Цена поездки 170 рублей, "
                                                        "Количество остановок 2");
    }
    if((ui->rad4->isChecked()) && (ui->rad6->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 50 минут, 21:10->22:00, "
                                                        "Цена поездки 110 рублей, "
                                                        "Количество остановок 1");
    }
    if((ui->rad4->isChecked()) && (ui->rad7->isChecked()) && (ui->rad15->isChecked())) {
        QMessageBox::information(this, "Время поездки", "Время поездки 20 минут, 21:10->21:30, "
                                                        "Цена поездки 50 рублей, "
                                                        "Количество остановок 0");
    }
}

