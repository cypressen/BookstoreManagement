#ifndef SUBPGSALENORBUY_H
#define SUBPGSALENORBUY_H

#include <QWidget>
#include <QTableWidget>
#include "Members.h"
#include "Inventory.h"
namespace Ui {
class SubPGSaleNorBuy;
}

class SubPGSaleNorBuy : public QWidget
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
    explicit SubPGSaleNorBuy(QWidget *parent = nullptr);
    ~SubPGSaleNorBuy();
    void set(Inventory* inventory);

    void updateInvenList();
    void updateBookList();

    void bookSearch();
    void bookAdd();
    void bookRemove();

    void confirm();
    void cancel();

    bool selected();
    BookLib* getBookList();
    std::string getName();
private:
    void updateBookLibHelper(QTableWidget* tableWidget,std::unordered_map<Book,amount,BookHasher>* getMap);
    Ui::SubPGSaleNorBuy *ui;
    Inventory* inventory;
    bool flag;
    BookLib* bookList;
};

#endif // SUBPGSALENORBUY_H
