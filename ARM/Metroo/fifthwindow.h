#ifndef FIFTHWINDOW_H
#define FIFTHWINDOW_H

#include <QWidget>

namespace Ui {
class FifthWindow;
}

class FifthWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FifthWindow(QWidget *parent = nullptr);
    ~FifthWindow();

private slots:
    void on_pushButton_clicked();

signals:
    void firstWindow();
    void secondWindow();

private:
    Ui::FifthWindow *ui;
};

#endif // FIFTHWINDOW_H
