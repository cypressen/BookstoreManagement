#ifndef PGPURCHASING_H
#define PGPURCHASING_H

#include <QWidget>
#include "Purchasing.h"
#include <QTableWidget>
namespace Ui {
class PGPurchasing;
}

class PGPurchasing : public QWidget
{
    Q_OBJECT

public:
    explicit PGPurchasing(QWidget *parent = nullptr);
    ~PGPurchasing();

    void setPurchasing(Purchasing* purchasing);

    void update();

    void search();
    void add();
    void remove();

    void save();
    void import();
private:
    void clearTable(QTableWidget* tableWidget);
    Ui::PGPurchasing *ui;
    Purchasing* purchasing;
};

#endif // PGPURCHASING_H
