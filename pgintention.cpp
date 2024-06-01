#include "pgintention.h"
#include "ui_pgintention.h"


int curRow = 0;

PGIntention::PGIntention(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGIntention)
{
    ui->setupUi(this);

    indMem = nullptr;
    corMem =nullptr;
    bookList =nullptr;

    connect(ui->PBRefresh,&QPushButton::clicked,this,&PGIntention::update);

    connect(ui->PBRefreshIntention,&QPushButton::clicked,this,&PGIntention::refreshIntention);
    connect(ui->PBRefreshInven,&QPushButton::clicked,this,&PGIntention::refreshInven);
    connect(ui->PBRefreshMems,&QPushButton::clicked,this,&PGIntention::refreshMems);
    connect(ui->PBRefreshList,&QPushButton::clicked,this,&PGIntention::refreshList);

    connect(ui->PBMemSearch,&QPushButton::clicked,this,&PGIntention::memSearch);
    connect(ui->PBSelect,&QPushButton::clicked,this,&PGIntention::memSelect);

    connect(ui->PBBookSearch,&QPushButton::clicked,this,&PGIntention::bookSearch);
    connect(ui->PBBookAdd,&QPushButton::clicked,this,&PGIntention::bookAdd);
    connect(ui->PBBookRemove,&QPushButton::clicked,this,&PGIntention::bookRemove);

    connect(ui->PBSearch,&QPushButton::clicked,this,&PGIntention::search);
    connect(ui->PBAdd,&QPushButton::clicked,this,&PGIntention::add);
    connect(ui->PBRemove,&QPushButton::clicked,this,&PGIntention::remove);

    connect(ui->PBSave,&QPushButton::clicked,this,&PGIntention::save);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGIntention::import);

    int width = 350;
    ui->tableIndWonder->setColumnWidth(1,width);
    ui->tableCorWonder->setColumnWidth(1,width);

}

void PGIntention::setIntention(Intention* intention,Members* members,Inventory* inven)
{
    this->intent = intention;
    this->members = members;
    this->inven = inven;

}
PGIntention::~PGIntention()
{
    delete ui;
}


void PGIntention::clearTable(QTableWidget* tableWidget){
    while(tableWidget->rowCount() >0){
        tableWidget->removeRow(0);
    }
}



void PGIntention::refreshIntention(){
    auto helper =[&](QTableWidget* tableWidget,std::vector<std::vector<std::string>>& vecVec){
        clearTable(tableWidget);
        for(int i = 0;i<vecVec.size();i+=1){
            QTableWidgetItem* nameBox = new QTableWidgetItem(QString::fromStdString(vecVec[i][0]));
            QTableWidgetItem* strBox = new QTableWidgetItem;
            std::string badStr = "";
            for(int j =1;j<vecVec[i].size();j+=1){
                badStr +=vecVec[i][j];
                badStr +=" ";
            }
            strBox->setText(QString::fromStdString(badStr));
            tableWidget->insertRow(0);
            tableWidget->setItem(0,0,nameBox);
            tableWidget->setItem(0,1,strBox);
        }
    };
    helper(ui->tableIndWonder,*intent->toStringVecInd());
    helper(ui->tableCorWonder,*intent->toStringVecCor());
}

void PGIntention::refreshMems(){

    clearTable(ui->tableMembers);
    auto helper = [&](QTableWidget* tableWidget,memSet* mset,bool type){

        for(const auto& item : *mset){
            tableWidget->insertRow(0);
            QTableWidgetItem* nameBox = new QTableWidgetItem(QString::fromStdString(item.getName()));
            tableWidget->setItem(0,0,nameBox);
            QTableWidgetItem* typeBox;
            if(type){
                typeBox = new QTableWidgetItem("Individual");
            }
            else {
                typeBox = new QTableWidgetItem("Corporate");
            }
            tableWidget->setItem(0,1,typeBox);
        }
    };

    helper(ui->tableMembers,members->getIndSet(),true);
    helper(ui->tableMembers,members->getCorSet(),false);
}

void PGIntention::updateBookLibHelper(QTableWidget *tableWidget,std::unordered_map<Book,amount,BookHasher>* getMap)
{
    clearTable(tableWidget);

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

void PGIntention::refreshList(){
    if(bookList){
        delete bookList;
        bookList = new BookLib;
    }
    clearTable(ui->tableBookList);
}


void PGIntention::refreshInven(){
    updateBookLibHelper(ui->tableInven,inven->returnMap());
}

void PGIntention::update(){
    refreshIntention();
    refreshInven();
    refreshMems();
    refreshList();
}
void PGIntention::memSearch(){

    std::string getName = ui->lineMemSearch->text().toStdString();
    refreshMems();
    int targetRow = -1;

    for(int i = 0; i < ui->tableMembers->rowCount();i+=1){
        if(getName == ui->tableMembers->item(i,0)->text().toStdString()){
            int typeIndex = ui->comboMemBox->currentIndex();

            std::string type = ui->tableMembers->item(i,1)->text().toStdString();

            if((typeIndex == 0&& type=="Individual") || (typeIndex == 1 && type =="Corporate")){
                targetRow = i;
                break;
            }
        }
    }

    if(targetRow != -1){

        QTableWidgetItem *nameBox = new QTableWidgetItem(ui->tableMembers->item(targetRow,0)->text());
        QTableWidgetItem *typeBox = new QTableWidgetItem(ui->tableMembers->item(targetRow,1)->text());
        while(ui->tableMembers->rowCount() > 0){
            ui->tableMembers->removeRow(0);
        }
        ui->tableMembers->insertRow(0);
        ui->tableMembers->setItem(0,0,nameBox);
        ui->tableMembers->setItem(0,1,typeBox);
    }
    else{
        while(ui->tableMembers->rowCount() > 0){
            ui->tableMembers->removeRow(0);
        }
    }
}

void PGIntention::memSelect(){
    if(ui->lineMemSearch->text().isEmpty())return;
    memSearch();
    std::string name = ui->tableMembers->item(0,0)->text().toStdString();
    int selectedType = ui->comboMemBox->currentIndex();
    if(selectedType == 0){
        if(indMem){
            delete indMem;
        }
        indMem = new IndividualMem(name);
    }
    else {
        if(corMem){
            delete corMem;
        }
        corMem = new CorporateMem(name);
    }
}

bool PGIntention::bookSearch(){

    std::string getTitle = ui->lineBookSearch->text().toStdString();

    refreshInven();
    int rowIndex =0;
    for(int i = 0; i < ui->tableInven->rowCount();i+=1){
        if(getTitle == ui->tableInven->item(i,0)->text().toStdString()){
            rowIndex = i;
            QTableWidgetItem *nameBox = new QTableWidgetItem(*ui->tableInven->item(rowIndex,0));
            QTableWidgetItem *priceBox= new QTableWidgetItem(*ui->tableInven->item(rowIndex,1));
            QTableWidgetItem *amountBox= new QTableWidgetItem(*ui->tableInven->item(rowIndex,2));
            clearTable(ui->tableInven);
            ui->tableInven->insertRow(0);
            ui->tableInven->setItem(0,0,nameBox);
            ui->tableInven->setItem(0,1,priceBox);
            ui->tableInven->setItem(0,2,amountBox);
            return true;
        }
    }
    return false;
}


void PGIntention::bookAdd(){
    if(ui->lineBookSearch->text().isEmpty())return;
    if(!bookList){
        bookList = new BookLib;
        qDebug()<<"new new ne w!!!";
    }

    int nums = ui->lineAmount->text().toInt();
    std::string title;
    double price = 0;
    if(bookSearch()){
            title = ui->tableInven->item(0,0)->text().toStdString();
            price = ui->tableInven->item(0,1)->text().toDouble();


        }else {
            title=ui->lineBookSearch->text().toStdString();
        }
        qDebug()<<nums<<title<<price;
        // Book *book = new Book(title,"",price);
        bookList->addBook(Book(title,"",price),nums);
        updateBookLibHelper(ui->tableBookList,bookList->returnMap());



    }

void PGIntention::bookRemove(){
if(ui->lineBookSearch->text().isEmpty())return;
    if(!bookList){
        return;
    }
    int nums = std::stoi(ui->lineAmount->text().toStdString());
    bookSearch();
    qDebug()<<nums;
    std::string title = ui->tableInven->item(0,0)->text().toStdString();
    double price = ui->tableInven->item(0,1)->text().toInt();
    Book *book = new Book(title,"",price);
    bookList->removeBook(*book,nums);
    updateBookLibHelper(ui->tableBookList,bookList->returnMap());

}


void PGIntention::add(){

    if(indMem){
        intent->addIndLack(*indMem,*bookList);
        delete indMem;
        indMem = nullptr;
        qDebug()<<"ind";
    }
    else if(corMem){
        intent->addCorWonder(*corMem,*bookList);
        delete corMem;
        corMem = nullptr;
        qDebug()<<"cor";
    }
    refreshIntention();
}


void PGIntention::search(){
    std::string getName = ui->lineSearch->text().toStdString();
    bool type = ui->comboSearchBox->currentIndex();
    auto helper = [&](QTableWidget* tableWidget){
        for(int i = 0 ;i<tableWidget->rowCount();i+=1){
            if(tableWidget->item(i,0)->text().toStdString() == getName){
                QTableWidgetItem* nameBox = new QTableWidgetItem(*tableWidget->item(i,0));
                QTableWidgetItem* detailBox = new QTableWidgetItem(*tableWidget->item(i,1));
                clearTable(tableWidget);
                tableWidget->insertRow(0);
                tableWidget->setItem(0,0,nameBox);
                tableWidget->setItem(0,1,detailBox);
                break;
            }

        }
    };
    if(!type){
        helper(ui->tableIndWonder);
    }
    else helper(ui->tableCorWonder);
}

void PGIntention::remove(){
    std::string getName = ui->lineSearch->text().toStdString();
    bool type = ui->comboSearchBox->currentIndex();
    if(!type){
        intent->rmInd(getName);
    }
    else intent->rmCor(getName);
    refreshIntention();
}

void PGIntention::save(){
    intent->write();
}

void PGIntention::import(){
    std::string version = ui->lineVersion->text().toStdString();
    qDebug()<<version;
    intent->init(intent->path / ("intention"+ version));

    refreshIntention();
}
