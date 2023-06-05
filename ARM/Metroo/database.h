#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>

namespace Ui {
class DataBase;
}

class DataBase : public QWidget
{
    Q_OBJECT

public:
    explicit DataBase(QWidget *parent = nullptr);
    ~DataBase();
    /* Методы для непосредственной работы с классом
     * Подключение к базе данных и вставка записей в таблицу
     * */
    void connectToDataBase();
    bool inserIntoDeviceTable(const QVariantList &data);

private:
    Ui::DataBase *ui;
};

#endif // DATABASE_H
