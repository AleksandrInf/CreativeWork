#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    thirdWindow = new ThirdWindow();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(thirdWindow, &ThirdWindow::firstWindow, this, &SecondWindow::show);

    fourthWindow = new FourthWindow();
    connect(fourthWindow, &FourthWindow::firstWindow, this, &SecondWindow::show);

    fifthWindow = new FifthWindow();
    connect(fifthWindow, &FifthWindow::firstWindow, this, &SecondWindow::show);
}
SecondWindow::~SecondWindow()
{
    delete ui;
}
void SecondWindow::on_pushButton_clicked()
{
    this->close();
    thirdWindow->show();    
}
void SecondWindow::on_pushButton_2_clicked()
{
    this->close();
    fourthWindow->show();
}
void SecondWindow::on_pushButton_3_clicked()
{
    this->close();
    fifthWindow->show();

}
void SecondWindow::on_pushButton_4_clicked()
{
    this->close();
}

