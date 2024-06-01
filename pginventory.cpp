#include "pginventory.h"
#include "ui_pginventory.h"

PGInventory::PGInventory(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGInventory)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnWidth(0,240);
    ui->tableWidget->setColumnWidth(1,240);
    ui->tableWidget->setColumnWidth(2,240);
    ui->tableWidget->setColumnWidth(3,240);

    connect(ui->PBAdd,&QPushButton::clicked,this,&PGInventory::add);
    connect(ui->PBRemove,&QPushButton::clicked,this,&PGInventory::remove);
    connect(ui->PBUpdate,&QPushButton::clicked,this,&PGInventory::updateWidget);
    connect(ui->PBSearch,&QPushButton::clicked,this,&PGInventory::search);
    connect(ui->PBSave,&QPushButton::clicked,this,&PGInventory::save);
    // connect(ui->PBSaveAs,&QPushButton::clicked,this,&PGInventory::saveAs);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGInventory::import);

    inven = new Inventory();
}

PGInventory::~PGInventory()
{
    delete ui;
}

void PGInventory::setInventory(Inventory *inven){
    this->inven = inven;
}

void PGInventory::save(){
    inven->write();
}

void PGInventory::import(){
    if(ui->importLine->text().isEmpty())return;
    std::string version = ui->importLine->text().toStdString();
    inven->init(inven->path / ("inventory" + version + ".csv"));
    updateWidget();
}
void PGInventory::updateWidget()
{
    while (ui->tableWidget->rowCount() > 0) {
        ui->tableWidget->removeRow(0);
    }
    std::unordered_map<Book,amount,BookHasher>* getMap = inven->returnMap();
    for(const auto& item: *getMap){
        qDebug()<<QString::fromStdString(item.first.getTitle())
                 <<QString::fromStdString(item.first.getPress())
        <<QString::number(item.first.getPrice(),'f',2)
        <<QString::number(item.second);
        QTableWidgetItem *nameBox = new QTableWidgetItem(QString::fromStdString(item.first.getTitle()));
        QTableWidgetItem *pressBox= new QTableWidgetItem(QString::fromStdString(item.first.getPress()));
        QTableWidgetItem *priceBox= new QTableWidgetItem(QString::number(item.first.getPrice(),'f',2));
        QTableWidgetItem *amountBox= new QTableWidgetItem(QString::number(item.second));
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0,nameBox);
        ui->tableWidget->setItem(0,1,pressBox);
        ui->tableWidget->setItem(0,2,priceBox);
        ui->tableWidget->setItem(0,3,amountBox);
    }

}
void PGInventory::add(){
    if(ui->addTitle->text().isEmpty() || ui->addPress->text().isEmpty() || ui->addPrice->text().isEmpty() ||ui->addAmount->text().isEmpty())return;
    std::string title= ui->addTitle->text().toStdString();
    std::string press =ui->addPress->text().toStdString();
    double price = std::stod(ui->addPrice->text().toStdString());
    int amount = std::stoi(ui->addAmount->text().toStdString());

    qDebug()<<title<<" "<<press<<" "<<price<<" "<<amount;

    Book newBook(title,press,price);

    inven->addBook(newBook,amount);

    updateWidget();
}

void PGInventory::search()
{
    if(ui->searchLine->text().isEmpty())return;
    updateWidget();
    int rowIndex =0;
    std::string title =ui->searchLine->text().toStdString();
    for(int i = 0; i < ui->tableWidget->rowCount();i+=1){
        if(title == ui->tableWidget->item(i,0)->text().toStdString()){
            rowIndex = i;
        }
    }
    QTableWidgetItem *nameBox = new QTableWidgetItem(*ui->tableWidget->item(rowIndex,0));
    QTableWidgetItem *pressBox= new QTableWidgetItem(*ui->tableWidget->item(rowIndex,1));
    QTableWidgetItem *priceBox= new QTableWidgetItem(*ui->tableWidget->item(rowIndex,2));
    QTableWidgetItem *amountBox= new QTableWidgetItem(*ui->tableWidget->item(rowIndex,3));
    while (ui->tableWidget->rowCount() > 0) {
        ui->tableWidget->removeRow(0);
    }
    ui->tableWidget->insertRow(0);
    ui->tableWidget->setItem(0,0,nameBox);
    ui->tableWidget->setItem(0,1,pressBox);
    ui->tableWidget->setItem(0,2,priceBox);
    ui->tableWidget->setItem(0,3,amountBox);

}
void PGInventory::remove(){
    if(ui->addTitle->text().isEmpty() || ui->addPress->text().isEmpty()  ||ui->addAmount->text().isEmpty())return;
    std::string title= ui->removeTitle->text().toStdString();
    std::string press =ui->removePress->text().toStdString();
    int amount = std::stoi(ui->removeAmount->text().toStdString());

    qDebug()<<title<<" "<<press<<" "<<" "<<amount;

    Book newBook(title,press);

    inven->removeBook(newBook,amount);

    updateWidget();
}

Inventory* PGInventory::returnInven(){
    return inven;
}
