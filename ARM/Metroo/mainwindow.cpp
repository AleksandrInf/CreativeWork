#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    secWindow = new SecondWindow();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secWindow, &SecondWindow::firstWindow, this, &MainWindow::show);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();

    if(login == "Codi" && password =="rext") {
        QMessageBox::information(this, "Авторизация", "Вы успешно прошли авторизацию");
        hide();
        secWindow->show();
        this->close();
    } else {
        QMessageBox::information(this, "Авторизация", "Вы успешно прошли авторизацию");
        hide();
        secWindow->show();
        this->close();
    }
}

