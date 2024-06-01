#include "pgsupplier.h"
#include "ui_pgsupplier.h"

PGSupplier::PGSupplier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGSupplier)
{
    ui->setupUi(this);

    connect(ui->PBAdd,&QPushButton::clicked,this,&PGSupplier::add);
    connect(ui->PBRefresh,&QPushButton::clicked,this,&PGSupplier::update);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGSupplier::import);
    connect(ui->PBRemove,&QPushButton::clicked,this,&PGSupplier::remove);
    connect(ui->PBsearch,&QPushButton::clicked,this,&PGSupplier::search);
    connect(ui->PBSave,&QPushButton::clicked,this,&PGSupplier::save);
    ui->tableWidget->setColumnWidth(0,500);
}

PGSupplier::~PGSupplier()
{
    delete ui;
}

void PGSupplier::setSupplier(Supplier *supplier){
    this->supplier = supplier;
}


void PGSupplier::clearTable(){
    while(ui->tableWidget->rowCount() >0){
        ui->tableWidget->removeRow(0);
    }
}

void PGSupplier::update(){
    std::vector<std::string> * get = supplier->get();
    clearTable();
    if(get->empty()){
        ui->labelCount->setText(0);
        return;
    }
    int count = 0;
    for(const auto& str: *get){
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString::fromStdString(str)));
        count +=1;
    }
    ui->labelCount->setText(QString::number(count));
}

void PGSupplier::add(){
    std::string get = ui->lineSearch->text().toStdString();
    supplier->add(get);
    update();
}

void PGSupplier::remove(){
    std::string get = ui->lineSearch->text().toStdString();
    supplier->remove(get);
    update();
}

void PGSupplier::search(){
    std::string get = ui->lineSearch->text().toStdString();
    update();
    for(int i = 0;i < ui->tableWidget->rowCount();i+=1){
        if(ui->tableWidget->item(i,0)->text().toStdString() == get){
            clearTable();
            ui->tableWidget->insertRow(0);
            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString::fromStdString(get)));
        }
    }
}


void PGSupplier::save(){
    supplier->write();
}

void PGSupplier::import(){
    std::string version = ui->lineVersion->text().toStdString();
    supplier->init(supplier->path / ("supplier" + version + ".csv"));
    update();
}
