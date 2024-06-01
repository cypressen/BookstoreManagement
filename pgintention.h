#ifndef PGINTENTION_H
#define PGINTENTION_H

#include <QWidget>
#include <QTableWidgetItem>
#include "Intention.h"
#include <QDebug>

#include"Members.h"
#include"Inventory.h"

namespace Ui {
class PGIntention;
}

class PGIntention : public QWidget
{
    Q_OBJECT

public:
    explicit PGIntention(QWidget *parent = nullptr);
    ~PGIntention();

    void setIntention(Intention* intention,Members* members,Inventory* inven);


    void memSelect();
    bool memSearch();

    bool bookSearch();
    void bookAdd();
    void bookRemove();

    void search();
    void add();
    void remove();

    void update();
    void refreshMems();
    void refreshInven();
    void refreshIntention();
    void refreshList();

    void save();
    void import();

private:
    void clearTable(QTableWidget* tableWidget);
    void updateBookLibHelper(QTableWidget *tableWidget,std::unordered_map<Book,amount,BookHasher>* getMap);
    Ui::PGIntention *ui;
    Intention *intent;

    Members* members;
    Inventory* inven;

    BookLib* bookList;


    IndividualMem* indMem;
    CorporateMem* corMem;
};

#endif // PGINTENTION_H
