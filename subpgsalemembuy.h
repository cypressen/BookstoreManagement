#ifndef SUBPGSALEMEMBUY_H
#define SUBPGSALEMEMBUY_H

#include <QWidget>
#include <QTableWidget>
#include "Members.h"
#include "Inventory.h"

namespace Ui {
class SubPGSaleMemBuy;
}

class SubPGSaleMemBuy : public QWidget
{
    Q_OBJECT


    signals:
    void widgetClose();
    protected:
    void closeEvent(QCloseEvent *event)override{
        emit widgetClose();
        QWidget::closeEvent(event);
    }

public:
    explicit SubPGSaleMemBuy(QWidget *parent = nullptr);
    ~SubPGSaleMemBuy();

    void set(Inventory* inventory, Members* members);


    void updateMemList();
    void updateInvenList();
    void updateBookList();
    void updateLineSelected();

    bool bookSearch();
    void bookAdd();
    void bookRemove();

    bool memSearch();
    void memSelect();

    void confirm();
    void cancel();

    int selected();
    Member* getMem();
    BookLib* getBookList();
    int getPoints();
private:
    void updateBookLibHelper(QTableWidget* tableWidget,std::unordered_map<Book,amount,BookHasher>* getMap);
    Ui::SubPGSaleMemBuy *ui;
    Inventory* inventory;
    Members* members;
    Member* selectedMem;
    int selectedType;
    BookLib* bookList;
};

#endif // SUBPGSALEMEMBUY_H
