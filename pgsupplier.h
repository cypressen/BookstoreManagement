#ifndef PGSUPPLIER_H
#define PGSUPPLIER_H

#include <QWidget>
#include "Supplier.h"
namespace Ui {
class PGSupplier;
}

class PGSupplier : public QWidget
{
    Q_OBJECT

public:
    explicit PGSupplier(QWidget *parent = nullptr);
    ~PGSupplier();

    void setSupplier(Supplier* supplier);

    void update();
    void add();
    void remove();
    void search();
    void save();
    void import();

private:
    void clearTable();
    Ui::PGSupplier *ui;
    Supplier* supplier;
};

#endif // PGSUPPLIER_H
