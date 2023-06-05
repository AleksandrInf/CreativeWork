#include "thirdwindow.h"
#include "ui_thirdwindow.h"

ThirdWindow::ThirdWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    flight11 = new Flight1();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(flight11, &Flight1::thirdWindow, this, &ThirdWindow::show);

    // Инициализируем второе окно
    flight12 = new Flight2();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(flight12, &Flight2::thirdWindow, this, &ThirdWindow::show);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}

void ThirdWindow::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}

void ThirdWindow::on_pushButton_2_clicked()
{
    flight11->show();
    this->close();
}
void ThirdWindow::on_pushButton_3_clicked()
{
    flight12->show();
    this->close();
}
