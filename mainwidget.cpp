#include "mainwidget.h"
#include "ui_mainwidget.h"

int homeIndex = 0;

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);


    //init pages
    PGSale *salePage = new PGSale(this);
    PGInventory *inventoryPage = new PGInventory(this);
    PGIntention *intentionPage = new PGIntention(this);
    PGMembers *membersPage = new PGMembers(this);
    PGPress *pressPage = new PGPress(this);
    PGPromotion *promotionPage = new PGPromotion(this);
    PGPurchasing *purchasingPage = new PGPurchasing(this);
    PGSupplier *supplierPage = new PGSupplier(this);


    //add into stackedwidget
    // 0 -> 7 in index
    ui->stackedWidget->addWidget(salePage);
    ui->stackedWidget->addWidget(inventoryPage);
    ui->stackedWidget->addWidget(purchasingPage);
    ui->stackedWidget->addWidget(membersPage);
    ui->stackedWidget->addWidget(intentionPage);
    ui->stackedWidget->addWidget(promotionPage);
    ui->stackedWidget->addWidget(supplierPage);
    ui->stackedWidget->addWidget(pressPage);

    //set home page
    ui->stackedWidget->setCurrentWidget(salePage);

    //init index;
    homeIndex = ui->stackedWidget->currentIndex();

    //bind buttons
    connect(ui->PBSale,&QPushButton::clicked,this,&MainWidget::toSalePage);
    connect(ui->PBInventory,&QPushButton::clicked,this,&MainWidget::toInventoryPage);
    connect(ui->PBPurchasing,&QPushButton::clicked,this,&MainWidget::toPurchasingPage);
    connect(ui->PBMembers,&QPushButton::clicked,this,&MainWidget::toMembersPage);
    connect(ui->PBIntention,&QPushButton::clicked,this,&MainWidget::toIntentionPage);
    connect(ui->PBPromotion,&QPushButton::clicked,this,&MainWidget::toPromotionPage);
    connect(ui->PBSupplier,&QPushButton::clicked,this,&MainWidget::toSupplierPage);
    connect(ui->PBPress,&QPushButton::clicked,this,&MainWidget::toPressPage);


    /*

    Sale *sale;
    Inventory *inven;
    Intention *intention;
    Members *members;
    Press* press;
    Promotion* promotion;
    Purchasing *purchasing;
    Supplier *supplier;

*/

    inven = new Inventory;
    sale = new Sale(*inven);
    intention = new Intention;
    members = new Members;
    press =new Press;
    promotion = new Promotion(*sale);
    purchasing = new Purchasing;
    supplier = new Supplier;

    salePage->setSale(sale,inven,members);
    inventoryPage->setInventory(inven);
    intentionPage->setIntention(intention,members,inven);
    membersPage->setMembers(members);
    pressPage->setPress(press);
    promotionPage->setPromotion(promotion);
    purchasingPage->setPurchasing(purchasing);
    supplierPage->setSupplier(supplier);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::toSalePage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 0);
}
void MainWidget::toInventoryPage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 1);
}
void MainWidget::toPurchasingPage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 2);
}
void MainWidget::toMembersPage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 3);
}
void MainWidget::toIntentionPage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 4);
}
void MainWidget::toPromotionPage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 5);
}
void MainWidget::toSupplierPage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 6);
}
void MainWidget::toPressPage(){
    ui->stackedWidget->setCurrentIndex(homeIndex+ 7);
}



