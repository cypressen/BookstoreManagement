#ifndef PGMEMBERS_H
#define PGMEMBERS_H

#include <QWidget>
#include"Members.h"
#include <QTableWidget>

namespace Ui {
class PGMembers;
}

class PGMembers : public QWidget
{
    Q_OBJECT

public:
    explicit PGMembers(QWidget *parent = nullptr);
    ~PGMembers();

    void setMembers(Members* mems);

    void update();

    void search();
    void add();
    void change();
    void remove();

    void save();
    void import();


private:
    void clearTable(QTableWidget* tableWidget);
    Ui::PGMembers *ui;
    Members* mems;
};

#endif // PGMEMBERS_H
