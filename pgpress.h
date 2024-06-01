#ifndef PGPRESS_H
#define PGPRESS_H

#include <QWidget>
#include "Press.h"
namespace Ui {
class PGPress;
}

class PGPress : public QWidget
{
    Q_OBJECT

public:
    explicit PGPress(QWidget *parent = nullptr);
    ~PGPress();
    void setPress(Press* press);

    void update();
    void add();
    void remove();
    void search();
    void save();
    void import();

private:
    void clearTable();

    Ui::PGPress *ui;
    Press* press;
};

#endif // PGPRESS_H
