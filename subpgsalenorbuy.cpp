#include "subpgsalenorbuy.h"
#include "ui_subpgsalenorbuy.h"

SubPGSaleNorBuy::SubPGSaleNorBuy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SubPGSaleNorBuy)
{
    ui->setupUi(this);
    flag = false;

    bookList = new BookLib;


    connect(ui->PBUpdate,&QPushButton::clicked,this,&SubPGSaleNorBuy::updateInvenList);
    connect(ui->PBSearchBook,&QPushButton::clicked,this,&SubPGSaleNorBuy::bookSearch);

    connect(ui->PBAdd,&QPushButton::clicked,this,&SubPGSaleNorBuy::bookAdd);
    connect(ui->PBRm,&QPushButton::clicked,this,&SubPGSaleNorBuy::bookRemove);

    connect(ui->PBConfirm,&QPushButton::clicked,this,&SubPGSaleNorBuy::confirm);
    connect(ui->PBCancel,&QPushButton::clicked,this,&SubPGSaleNorBuy::cancel);

}

SubPGSaleNorBuy::~SubPGSaleNorBuy()
{
    delete bookList;
    delete ui;
}

void SubPGSaleNorBuy::set(Inventory *inventory)
{
    this->inventory = inventory;

    updateInvenList();
}

void SubPGSaleNorBuy::updateBookLibHelper(QTableWidget *tableWidget,std::unordered_map<Book,amount,BookHasher>* getMap)
{
    while(tableWidget->rowCount() > 0){
        tableWidget->removeRow(0);
    }

    for(const auto& item: *getMap){
        qDebug()<<QString::fromStdString(item.first.getTitle())
                 <<QString::fromStdString(item.first.getPress())
                 <<QString::number(item.first.getPrice(),'f',2)
                 <<QString::number(item.second);
        QTableWidgetItem *nameBox = new QTableWidgetItem(QString::fromStdString(item.first.getTitle()));
        QTableWidgetItem *priceBox= new QTableWidgetItem(QString::number(item.first.getPrice(),'f',2));
        QTableWidgetItem *amountBox= new QTableWidgetItem(QString::number(item.second));
        tableWidget->insertRow(0);
        tableWidget->setItem(0,0,nameBox);
        tableWidget->setItem(0,1,priceBox);
        tableWidget->setItem(0,2,amountBox);
    }

}

void SubPGSaleNorBuy::updateInvenList(){
    updateBookLibHelper(ui->inventoryTable,inventory->returnMap());
}

void SubPGSaleNorBuy::updateBookList(){
    updateBookLibHelper(ui->bookListTable,bookList->returnMap());
}



void SubPGSaleNorBuy::bookSearch(){
    std::string getTitle = ui->lineSearch->text().toStdString();

    updateInvenList();
    int rowIndex =-1;
    for(int i = 0; i < ui->inventoryTable->rowCount();i+=1){
        if(getTitle == ui->inventoryTable->item(i,0)->text().toStdString()){
            rowIndex = i;
        }
    }
    if(rowIndex != -1){
        QTableWidgetItem *nameBox = new QTableWidgetItem(*ui->inventoryTable->item(rowIndex,0));
        QTableWidgetItem *priceBox= new QTableWidgetItem(*ui->inventoryTable->item(rowIndex,1));
        QTableWidgetItem *amountBox= new QTableWidgetItem(*ui->inventoryTable->item(rowIndex,2));
        while (ui->inventoryTable->rowCount() > 0) {
            ui->inventoryTable->removeRow(0);
        }
        ui->inventoryTable->insertRow(0);
        ui->inventoryTable->setItem(0,0,nameBox);
        ui->inventoryTable->setItem(0,1,priceBox);
        ui->inventoryTable->setItem(0,2,amountBox);
    }
    while (ui->inventoryTable->rowCount() > 0) {
        ui->inventoryTable->removeRow(0);
    }

}


void SubPGSaleNorBuy::bookAdd(){
    if(ui->lineAmount->text().isEmpty())return;
    int nums = ui->lineAmount->text().toInt();
    bookSearch();
    qDebug()<<nums;
    std::string title = ui->inventoryTable->item(0,0)->text().toStdString();
    double price = std::stod(ui->inventoryTable->item(0,1)->text().toStdString());

    Book *book = new Book(title,"",price);
    bookList->addBook(*book,nums);
    updateBookList();
}

void SubPGSaleNorBuy::bookRemove(){
    if(ui->lineAmount->text().isEmpty())return;
    int nums = ui->lineAmount->text().toInt();
    bookSearch();
    qDebug()<<nums;
    std::string title = ui->inventoryTable->item(0,0)->text().toStdString();
    double price = std::stod(ui->inventoryTable->item(0,1)->text().toStdString());
    Book *book = new Book(title,"",price);
    bookList->removeBook(*book,nums);
    updateBookList();
}


void SubPGSaleNorBuy::confirm(){
    flag = true;
    this->close();
}
void SubPGSaleNorBuy::cancel(){
    this->close();
}


bool SubPGSaleNorBuy::selected(){
    return flag;
}
BookLib* SubPGSaleNorBuy::getBookList(){
    return bookList;
}
std::string SubPGSaleNorBuy::getName(){
    return ui->lineName->text().toStdString();
}

