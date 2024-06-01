#ifndef PGSALE_H
#define PGSALE_H

#include <QWidget>
#include <QDebug>
#include "subpgsalemembuy.h"
#include "subpgsalenorbuy.h"
#include "Sale.h"
namespace Ui {
class PGSale;
}

class PGSale : public QWidget
{
    Q_OBJECT

public:
    explicit PGSale(QWidget *parent = nullptr);
    ~PGSale();
    void setSale(Sale *sale,Inventory* inventory, Members* members);

    void updateTables();

    void search();
    void add();
    void remove();

    void save();
    void import();

    void updateDis();

private slots:
    // void oepnSubPg();

    void onSubPgClosed();
private:
    Ui::PGSale *ui;
    Sale* sale;
    Inventory* inventory;
    Members* members;
    SubPGSaleMemBuy *subPgMem;
    SubPGSaleNorBuy *subPgNor;

};

#endif // PGSALE_H
