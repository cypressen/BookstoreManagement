#include "pgmembers.h"
#include "ui_pgmembers.h"

PGMembers::PGMembers(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGMembers)
{
    ui->setupUi(this);

    connect(ui->PBRefresh,&QPushButton::clicked,this,&PGMembers::update);
    connect(ui->PBSearch,&QPushButton::clicked,this,&PGMembers::search);
    connect(ui->PBAdd,&QPushButton::clicked,this,&PGMembers::add);
    connect(ui->PBChange,&QPushButton::clicked,this,&PGMembers::change);
    connect(ui->PBRemove,&QPushButton::clicked,this,&PGMembers::remove);

    connect(ui->PBSave,&QPushButton::clicked,this,&PGMembers::save);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGMembers::import);
}

PGMembers::~PGMembers()
{
    delete ui;
}

void PGMembers::setMembers(Members *mems){

    this->mems = mems;
}
// void search();
// void add();
// void change();
// void remove();

// void save();
// void import();



void PGMembers::clearTable(QTableWidget* tableWidget){
    while(tableWidget->rowCount() > 0){
        tableWidget->removeRow(0);
    }
}

void PGMembers::update(){
    auto helper = [&](QTableWidget* tableWidget,memSet* mset){
        clearTable(tableWidget);
        for(const auto& item : *mset){
            tableWidget->insertRow(0);
            QTableWidgetItem* nameBox = new QTableWidgetItem(QString::fromStdString(item.getName()));
            QTableWidgetItem* levelBox = new QTableWidgetItem(QString::number(item.getLevel()));
            QTableWidgetItem* pointsBox = new QTableWidgetItem(QString::number(item.getPoints()));
            tableWidget->setItem(0,0,nameBox);
            tableWidget->setItem(0,1,levelBox);
            tableWidget->setItem(0,2,pointsBox);
        }
    };

    helper(ui->tableInd,mems->getIndSet());
    helper(ui->tableCor,mems->getCorSet());
}

void PGMembers::add(){
    if(ui->lineName->text().isEmpty())return;

    std::string getName = ui->lineName->text().toStdString();
    int level = ui->lineLevel->text().toInt();
    int points =ui->linePoints->text().toInt();

    if(ui->comboBox->currentIndex() == 0){
        mems->addIndMem(IndividualMem(getName,level,points));
    }

    else {
        mems->addCorMem(CorporateMem(getName,level,points));
    }
    update();


}

void PGMembers::remove(){
    std::string getName = ui->lineName->text().toStdString();
    if(ui->comboBox->currentIndex() == 0){
        mems->removeIndMem(IndividualMem(getName));
    }

    else {
        mems->removeCorMem(CorporateMem(getName));
    }
    update();
}

void PGMembers::change(){
    remove();
    add();
}



bool PGMembers::search(){
    if(ui->lineName->text().isEmpty())return false;
    update();
    std::string getName = ui->lineName->text().toStdString();


    auto helper =[&](QTableWidget* tableWidget)->bool{
        for(int i = 0;i < tableWidget->rowCount();i+=1){
            if(getName == tableWidget->item(i,0)->text().toStdString()){

                int level = tableWidget->item(i,1)->text().toInt();
                int points = tableWidget->item(i,2)->text().toInt();
                clearTable(tableWidget);
                tableWidget->insertRow(0);
                QTableWidgetItem* nameBox = new QTableWidgetItem(QString::fromStdString(getName));
                QTableWidgetItem* levelBox = new QTableWidgetItem(QString::number(level));
                QTableWidgetItem* pointsBox = new QTableWidgetItem(QString::number(points));
                tableWidget->setItem(0,0,nameBox);
                tableWidget->setItem(0,1,levelBox);
                tableWidget->setItem(0,2,pointsBox);
                return true;
            }

        }

return false;
    };
    if(ui->comboBox->currentIndex() == 0){
        if( helper(ui->tableInd))return true;
        else clearTable(ui->tableInd);
    }

    else {
        if(helper(ui->tableCor)) return true;
        else clearTable(ui->tableCor);
    }

    return false;
}




void PGMembers::save(){
    mems->write();
}

void PGMembers::import(){
    std::string version = ui->lineVersion->text().toStdString();

    mems->init(mems->path / ("members" + version));
    update();
}


