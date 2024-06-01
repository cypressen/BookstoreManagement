#include "pgsale.h"
#include "ui_pgsale.h"

PGSale::PGSale(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGSale)
{
    ui->setupUi(this);

    subPgMem =nullptr;
    subPgNor = nullptr;
    connect(ui->PBAdd,&QPushButton::clicked,this,&PGSale::add);

    connect(ui->PBRefresh,&QPushButton::clicked,this,&PGSale::updateTables);

    connect(ui->PBSave,&QPushButton::clicked,this,&PGSale::save);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGSale::import);

    connect(ui->PBSearch,&QPushButton::clicked,this,&PGSale::search);
    connect(ui->PBRemove,&QPushButton::clicked,this,&PGSale::remove);

    int width = 880;

    ui->tableWidgetCor->setColumnWidth(1,width);
    ui->tableWidgetInd->setColumnWidth(1,width);
    ui->tableWidgetNor->setColumnWidth(1,width);
}


void PGSale::search(){
    updateTables();
    std::string name=ui->lineSearch->text().toStdString();
    int type = ui->selectTypeBox->currentIndex();
    qDebug() << name;
    auto helper = [&](QTableWidget* tableWidget,std::string target){

        for(int i = 0;i<tableWidget->rowCount();i+=1){
            auto item = tableWidget->item(i,0);
            if(item->text().toStdString() == target){
                QTableWidgetItem * getName =new QTableWidgetItem(*item);
                QTableWidgetItem * getDetail = new QTableWidgetItem(*tableWidget->item(i,1));
                while(tableWidget->rowCount() > 0){
                    tableWidget->removeRow(0);
                }
                tableWidget->insertRow(0);
                tableWidget->setItem(0,0,getName);
                tableWidget->setItem(0,1,getDetail);
                break;
            }
        }
    };

    if(type == 0){
        helper(ui->tableWidgetNor,name);
    }
    else if(type == 1){
        helper(ui->tableWidgetInd,name);
    }
    else if(type == 2){
        helper(ui->tableWidgetCor,name);
    }
}

void PGSale::remove(){
    std::string name=ui->lineSearch->text().toStdString();
    int type = ui->selectTypeBox->currentIndex();
    if(type == 0){
        sale->rmNor(name);
    }
    else if(type == 1){
        sale->rmInd(name);
    }
    else if(type == 2){
        sale ->rmCor(name);
    }
    updateTables();
}
void PGSale::save(){
    sale->write();
}

void PGSale::import(){
    std::string version = ui->lineVersion->text().toStdString();
    qDebug()<<version;
    sale->init(sale->path / ("sale"+ version));

    updateTables();
}

void PGSale::onSubPgClosed(){


    if(subPgMem){
        int select= subPgMem->selected();
        if(select != -1){
            if(select == 0){
                sale->indMemBuy(*subPgMem->getMem(),*subPgMem->getBookList(),subPgMem->getPoints());
            }
            else {
                sale->corMemBuy(*subPgMem->getMem(),*subPgMem->getBookList(),subPgMem->getPoints());
            }
            delete subPgMem;
            qDebug()<<"delete";
            subPgMem = nullptr;

        }
    }

    if(subPgNor){
        if(subPgNor->selected()){
            sale->normalBuy(subPgNor->getName(),*subPgNor->getBookList());
            delete subPgNor;
            qDebug()<<"nor deleted";
            subPgNor = nullptr;

        }
    }

        updateTables();
}

PGSale::~PGSale()
{
    delete ui;
}

void PGSale::updateTables(){
    updateDis();

    auto helper = [&](saleMap* saleMap,QTableWidget* tableWidget){
        while(tableWidget->rowCount() > 0){
            tableWidget->removeRow(0);
        }
        for(const auto& item : *saleMap){
            QTableWidgetItem* nameBox = new QTableWidgetItem(QString::fromStdString(item.first));
            QTableWidgetItem* detailBox = new QTableWidgetItem(QString::fromStdString(item.second));
            tableWidget->insertRow(0);
            tableWidget->setItem(0,0,nameBox);
            tableWidget->setItem(0,1,detailBox);
        }
    };

    helper(sale->getNorSale(),ui->tableWidgetNor);
    helper(sale->getIndSale(),ui->tableWidgetInd);
    helper(sale->getCorSale(),ui->tableWidgetCor);
}

void PGSale::setSale(Sale *sale,Inventory* inventory, Members* members)
{
    this->sale = sale;
    this->inventory = inventory;
    this->members =members;
    updateDis();

}

void PGSale::updateDis(){
    ui->discountLabel1->setText(QString::number(sale->getPromotionDis(),'f',2));
    ui->discountLabel2->setText(QString::number(sale->getPointsDis(),'f',2));
    ui->discountLabel3->setText(QString::number(sale->getLevelDis(),'f',2));
    ui->discountLabel4->setText(QString::number(sale->getCorDis(),'f',2));
}
void PGSale::add(){
    if(ui->selectBox->currentIndex() == 0){
        if(!subPgNor){
            subPgNor = new SubPGSaleNorBuy;
            this->subPgNor->set(inventory);
            connect(subPgNor,&SubPGSaleNorBuy::widgetClose,this,&PGSale::onSubPgClosed);
        }
        subPgNor->show();
    }
    else {
        if(!subPgMem){
            subPgMem = new SubPGSaleMemBuy;
            this->subPgMem->set(inventory,members);
            connect(subPgMem,&SubPGSaleMemBuy::widgetClose,this,&PGSale::onSubPgClosed);
        }
        subPgMem->show();
    }
}
