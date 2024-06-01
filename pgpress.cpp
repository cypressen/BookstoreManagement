#include "pgpress.h"
#include "ui_pgpress.h"

PGPress::PGPress(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGPress)
{
    ui->setupUi(this);

    connect(ui->PBAdd,&QPushButton::clicked,this,&PGPress::add);
    connect(ui->PBRefresh,&QPushButton::clicked,this,&PGPress::update);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGPress::import);
    connect(ui->PBRemove,&QPushButton::clicked,this,&PGPress::remove);
    connect(ui->PBsearch,&QPushButton::clicked,this,&PGPress::search);
    connect(ui->PBSave,&QPushButton::clicked,this,&PGPress::save);
    ui->tableWidget->setColumnWidth(0,500);
}

PGPress::~PGPress()
{
    delete ui;
}

void PGPress::setPress(Press *press){
    this->press = press;
}

void PGPress::clearTable(){
    while(ui->tableWidget->rowCount() >0){
        ui->tableWidget->removeRow(0);
    }
}

void PGPress::update(){
    std::vector<std::string> * get = press->get();
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

void PGPress::add(){
    std::string get = ui->lineSearch->text().toStdString();
    press->add(get);
    update();
}

void PGPress::remove(){
    std::string get = ui->lineSearch->text().toStdString();
    press->remove(get);
    update();
}

void PGPress::search(){
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


void PGPress::save(){
    press->write();
}

void PGPress::import(){
    std::string version = ui->lineVersion->text().toStdString();
    press->init(press->path / ("press" + version + ".csv"));
    update();
}



// void update();
// void add();
// void remove();
// void search();
// void save();
// void import();
