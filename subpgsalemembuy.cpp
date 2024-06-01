#include "subpgsalemembuy.h"
#include "ui_subpgsalemembuy.h"

SubPGSaleMemBuy::SubPGSaleMemBuy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SubPGSaleMemBuy)
{
    ui->setupUi(this);

    bookList = new BookLib;
    selectedMem = nullptr;
    selectedType = -1;


    connect(ui->PBUpdate,&QPushButton::clicked,this,&SubPGSaleMemBuy::updateInvenList);
    connect(ui->PBUpdate,&QPushButton::clicked,this,&SubPGSaleMemBuy::updateMemList);
    connect(ui->PBSearchBook,&QPushButton::clicked,this,&SubPGSaleMemBuy::bookSearch);

    connect(ui->PBAdd,&QPushButton::clicked,this,&SubPGSaleMemBuy::bookAdd);
    connect(ui->PBRm,&QPushButton::clicked,this,&SubPGSaleMemBuy::bookRemove);

    connect(ui->PBSearchMem,&QPushButton::clicked,this,&SubPGSaleMemBuy::memSearch);
    connect(ui->PBSelectMem,&QPushButton::clicked,this,&SubPGSaleMemBuy::memSelect);

    connect(ui->PBConfirm,&QPushButton::clicked,this,&SubPGSaleMemBuy::confirm);
    connect(ui->PBCancel,&QPushButton::clicked,this,&SubPGSaleMemBuy::cancel);

}

SubPGSaleMemBuy::~SubPGSaleMemBuy()
{
    delete selectedMem;
    delete bookList;
    delete ui;
}

void SubPGSaleMemBuy::set(Inventory *inventory, Members *members)
{
    this->inventory = inventory;
    this->members = members;

    updateMemList();
    updateInvenList();
}

void SubPGSaleMemBuy::updateBookLibHelper(QTableWidget *tableWidget,std::unordered_map<Book,amount,BookHasher>* getMap)
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
void SubPGSaleMemBuy::updateMemList(){
    while(ui->membersTable->rowCount() > 0){
        ui->membersTable->removeRow(0);
    }

    auto helper = [&](Member mem){
        QTableWidgetItem *nameBox = new QTableWidgetItem(QString::fromStdString(mem.getName()));
        QTableWidgetItem *levelBox = new QTableWidgetItem(QString::number(mem.getLevel()));
        QTableWidgetItem *pointsBox = new QTableWidgetItem(QString::number(mem.getPoints()));
        qDebug()<<nameBox->text()<<levelBox->text()<<pointsBox->text();
        ui->membersTable->insertRow(0);
        ui->membersTable->setItem(0,0,nameBox);
        ui->membersTable->setItem(0,1,levelBox);
        ui->membersTable->setItem(0,2,pointsBox);
    };
    for(const auto& mem:*(members->getIndSet())){
        helper(mem);
        QTableWidgetItem *typeBox = new QTableWidgetItem("Individual");
        ui->membersTable->setItem(0,3,typeBox);
    }
    for(const auto& mem:*(members->getCorSet())){
        helper(mem);
        QTableWidgetItem *typeBox = new QTableWidgetItem("Corporate");
        ui->membersTable->setItem(0,3,typeBox);
    }
}

void SubPGSaleMemBuy::updateInvenList(){
    updateBookLibHelper(ui->inventoryTable,inventory->returnMap());
}

void SubPGSaleMemBuy::updateBookList(){
    updateBookLibHelper(ui->bookListTable,bookList->returnMap());
}

bool SubPGSaleMemBuy::bookSearch(){
    if(ui->lineSearch->text().isEmpty())return false;
    std::string getTitle = ui->lineSearch->text().toStdString();

    updateInvenList();
    int rowIndex =-1;
    for(int i = 0; i < ui->inventoryTable->rowCount();i+=1){
        if(getTitle == ui->inventoryTable->item(i,0)->text().toStdString()){
            rowIndex = i;
        }
    }
if(rowIndex!= -1){

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
    return true;

}
    else {
    while (ui->inventoryTable->rowCount() > 0) {
        ui->inventoryTable->removeRow(0);
    }
}

return false;
}

void SubPGSaleMemBuy::bookAdd(){
    if(ui->lineAmount->text().isEmpty())return;
    int nums = ui->lineAmount->text().toInt();
    if(!bookSearch())return;
    qDebug()<<nums;
    std::string title = ui->inventoryTable->item(0,0)->text().toStdString();
    double price = std::stod(ui->inventoryTable->item(0,1)->text().toStdString());

    Book *book = new Book(title,"",price);
    bookList->addBook(*book,nums);
    updateBookList();
}

void SubPGSaleMemBuy::bookRemove(){
    if(!bookSearch())return;
    int nums = std::stoi(ui->lineAmount->text().toStdString());

    qDebug()<<nums;
    std::string title = ui->inventoryTable->item(0,0)->text().toStdString();
    double price = std::stod(ui->inventoryTable->item(0,1)->text().toStdString());
    Book *book = new Book(title,"",price);
    bookList->removeBook(*book,nums);
    updateBookList();
}


bool SubPGSaleMemBuy::memSearch(){
    std::string getName = ui->lineMemName->text().toStdString();
    updateMemList();
    int targetRow = -1;
    qDebug()<<ui->membersTable->rowCount();
    for(int i = 0; i < ui->membersTable->rowCount();i+=1){
        if(getName == ui->membersTable->item(i,0)->text().toStdString()){
            int typeIndex = ui->comboBox->currentIndex();
            std::string type = ui->membersTable->item(i,3)->text().toStdString();
            if((typeIndex == 0&& type=="Individual") || (typeIndex == 1 && type =="Corporate")){
                targetRow = i;
                break;
            }
        }
    }
    if(targetRow != -1){
        QTableWidgetItem *nameBox = new QTableWidgetItem(ui->membersTable->item(targetRow,0)->text());
        QTableWidgetItem *levelBox = new QTableWidgetItem(ui->membersTable->item(targetRow,1)->text());
        QTableWidgetItem *pointsBox = new QTableWidgetItem(ui->membersTable->item(targetRow,2)->text());
        QTableWidgetItem *typeBox = new QTableWidgetItem(ui->membersTable->item(targetRow,3)->text());
        while(ui->membersTable->rowCount() > 0){
            ui->membersTable->removeRow(0);
        }
        ui->membersTable->insertRow(0);
        ui->membersTable->setItem(0,0,nameBox);
        ui->membersTable->setItem(0,1,levelBox);
        ui->membersTable->setItem(0,2,pointsBox);
        ui->membersTable->setItem(0,3,typeBox);
        return true;
    }
    else{
        while(ui->membersTable->rowCount() > 0){
            ui->membersTable->removeRow(0);
        }
    }
    return false;
}

void SubPGSaleMemBuy::updateLineSelected(){
    std::string info =selectedMem->getName() +" ("+ui->comboBox->currentText().toStdString()+")";
    ui->lineSelected->setText(QString::fromStdString(info));
}

void SubPGSaleMemBuy::memSelect(){
    if(!memSearch())return;

    std::string name = ui->membersTable->item(0,0)->text().toStdString();
    int level = std::stoi(ui->membersTable->item(0,1)->text().toStdString());
    int points = std::stoi(ui->membersTable->item(0,2)->text().toStdString());
    selectedMem = new Member(name,level,points);
    selectedType = ui->comboBox->currentIndex();
    updateLineSelected();
}

void SubPGSaleMemBuy::confirm(){
    if(ui->lineSelected->text().isNull())cancel();

    this->close();
}
void SubPGSaleMemBuy::cancel(){
    selectedType = -1;
    selectedMem = nullptr;
    bookList = nullptr;

    this->close();
}

int SubPGSaleMemBuy::selected(){
    return selectedType;
}

Member* SubPGSaleMemBuy::getMem(){
    return selectedMem;
}

BookLib* SubPGSaleMemBuy::getBookList(){
    return bookList;
}


int SubPGSaleMemBuy::getPoints(){
    return ui->linePoints->text().toInt();
}


