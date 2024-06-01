#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

#include "pgsale.h"
#include "pginventory.h"
#include "pgintention.h"
#include "pgmembers.h"
#include "pgpress.h"
#include "pgpromotion.h"
#include "pgpurchasing.h"
#include "pgsupplier.h"

#include"Members.h"
#include"Sale.h"
#include"Inventory.h"
#include"Intention.h"
#include"Press.h"
#include"Promotion.h"
#include"Purchasing.h"
#include"Supplier.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    void toSalePage();
    void toInventoryPage();
    void toIntentionPage();
    void toMembersPage();
    void toPressPage();
    void toPromotionPage();
    void toPurchasingPage();
    void toSupplierPage();


private:
    Ui::MainWidget *ui;

    Ui::PGSale *salePage;
    Ui::PGInventory *inventoryPage;
    Ui::PGIntention *intentionPage;
    Ui::PGMembers *membersPage;
    Ui::PGPress *pressPage;
    Ui::PGPromotion *promotionPage;
    Ui::PGPurchasing *purchasingPage;
    Ui::PGSupplier *supplierPage;

    Sale *sale;
    Inventory *inven;
    Intention *intention;
    Members *members;
    Press* press;
    Promotion* promotion;
    Purchasing *purchasing;
    Supplier *supplier;

};
#endif // MAINWIDGET_H
