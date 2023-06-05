#include "fourthwindow.h"
#include "ui_fourthwindow.h"

FourthWindow::FourthWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourthWindow)
{
    ui->setupUi(this);
    flightScore = new Flight12();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(flightScore, &Flight12::fourthWindow, this, &FourthWindow::show);

    flightObich = new Flight22();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(flightObich, &Flight22::fourthWindow, this, &FourthWindow::show);
}
FourthWindow::~FourthWindow()
{
    delete ui;
}
void FourthWindow::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}
void FourthWindow::on_pushButton_2_clicked()
{
    //this->close();
    flightScore->show();
}
void FourthWindow::on_pushButton_3_clicked()
{
    //this->close();
    flightObich->show();
}

