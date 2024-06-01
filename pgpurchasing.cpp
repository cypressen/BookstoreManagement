#include "pgpurchasing.h"
#include "ui_pgpurchasing.h"

PGPurchasing::PGPurchasing(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGPurchasing)
{
    ui->setupUi(this);

    connect(ui->PBRefresh,&QPushButton::clicked,this,&PGPurchasing::update);
    connect(ui->PBAdd,&QPushButton::clicked,this,&PGPurchasing::add);
    connect(ui->PBSearch,&QPushButton::clicked,this,&PGPurchasing::search);
    connect(ui->PBRemove,&QPushButton::clicked,this,&PGPurchasing::remove);
    connect(ui->PBSave,&QPushButton::clicked,this,&PGPurchasing::save);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGPurchasing::import);

}

PGPurchasing::~PGPurchasing()
{
    delete ui;
}

void PGPurchasing::setPurchasing(Purchasing *purchasing){
    this->purchasing = purchasing;
}


/*

    void update();

    void search();
    void add();
    void remove();

    void save();
    void import();
*/


void PGPurchasing::clearTable(QTableWidget* tableWidget){
    while(tableWidget->rowCount() > 0){
        tableWidget->removeRow(0);
    }
}

void PGPurchasing::update(){
    auto helper = [&](QTableWidget* tableWidget,BookLib* lib){
        clearTable(tableWidget);
        for(const auto& item : *(lib->returnMap())){
            tableWidget->insertRow(0);
            auto *getBook = &item.first;
            QTableWidgetItem* titleBox = new QTableWidgetItem(QString::fromStdString(getBook->getTitle()));
            QTableWidgetItem* pressBox = new QTableWidgetItem(QString::fromStdString(getBook->getPress()));
            QTableWidgetItem* amountBox = new QTableWidgetItem(QString::number(item.second));
            tableWidget->setItem(0,0,titleBox);
            tableWidget->setItem(0,1,pressBox);
            tableWidget->setItem(0,2,amountBox);
        }
    };

    helper(ui->tablePurchasing,purchasing->getLibPur());
    helper(ui->tableReturn,purchasing->getLibRet());
}

void PGPurchasing::add(){
    std::string getTitle = ui->lineTitle->text().toStdString();
    std::string getPress = ui->linePress->text().toStdString();
    int num = ui->lineAmount->text().toInt();

    if(ui->comboBox->currentIndex() == 0){
        purchasing->purchaseBook(Book(getTitle,getPress),num);
    }

    else {
        purchasing->returnBook(Book(getTitle,getPress),num);
    }
    update();
}


void PGPurchasing::remove(){


    std::string getTitle = ui->lineTitle->text().toStdString();
    std::string getPress = ui->linePress->text().toStdString();
    int num = ui->lineAmount->text().toInt();

    if(ui->comboBox->currentIndex() == 0){
        purchasing->puchaseRemove(Book(getTitle,getPress),num);
    }

    else {
        purchasing->returnRemove(Book(getTitle,getPress),num);
    }
    update();
}


void PGPurchasing::search(){
    update();
    std::string getTitle = ui->lineTitle->text().toStdString();
    std::string getPress = ui->linePress->text().toStdString();


    auto helper =[&](QTableWidget* tableWidget){
        for(int i = 0;i < tableWidget->rowCount();i+=1){
            if(getTitle == tableWidget->item(i,0)->text().toStdString()
                && getPress == tableWidget->item(i,1)->text().toStdString()){
                int num = tableWidget->item(i,2)->text().toInt();
                clearTable(tableWidget);
                tableWidget->insertRow(0);
                QTableWidgetItem* titleBox = new QTableWidgetItem(QString::fromStdString(getTitle));
                QTableWidgetItem* pressBox = new QTableWidgetItem(QString::fromStdString(getPress));
                QTableWidgetItem* numBox = new QTableWidgetItem(QString::number(num));
                tableWidget->setItem(0,0,titleBox);
                tableWidget->setItem(0,1,pressBox);
                tableWidget->setItem(0,2,numBox);
            }
        }


    };
     if(ui->comboBox->currentIndex() == 0){
        helper(ui->tablePurchasing);
     }

    else {
        helper(ui->tableReturn);
    }
}



void PGPurchasing::save(){
    purchasing->write();
}

void PGPurchasing::import(){
    std::string version = ui->lineVersion->text().toStdString();

    purchasing->init(purchasing->path / ("purchasing" + version));
    update();
}
