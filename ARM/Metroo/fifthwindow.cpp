#include "fifthwindow.h"
#include "ui_fifthwindow.h"

FifthWindow::FifthWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FifthWindow)
{
    ui->setupUi(this);
}

FifthWindow::~FifthWindow()
{
    delete ui;
}
void FifthWindow::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}

