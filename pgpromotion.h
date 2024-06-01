#ifndef PGPROMOTION_H
#define PGPROMOTION_H

#include <QWidget>
#include"Promotion.h"

namespace Ui {
class PGPromotion;
}

class PGPromotion : public QWidget
{
    Q_OBJECT

public:
    explicit PGPromotion(QWidget *parent = nullptr);
    ~PGPromotion();

    void setPromotion(Promotion* promotion);

    void update();
    void confirm();

    void save();
    void import();
private:
    Ui::PGPromotion *ui;
    Promotion* promotion;

};



#endif // PGPROMOTION_H
