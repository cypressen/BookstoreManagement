#ifndef PGINVENTORY_H
#define PGINVENTORY_H

#include <QWidget>
#include<QDebug>
#include "Inventory.h"
#include <QTableWidgetItem>


namespace Ui {
class PGInventory;
}

class PGInventory : public QWidget
{
    Q_OBJECT

public:
    explicit PGInventory(QWidget *parent = nullptr);
    ~PGInventory();
    void add();
    void remove();

    void updateWidget();
    void search();

    void save();
    // void saveAs();
    void import();

    Inventory* returnInven();

    void setInventory(Inventory* inven);

private:
    Ui::PGInventory *ui;
    Inventory* inven;
};

#endif // PGINVENTORY_H
