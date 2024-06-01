#include "pgpromotion.h"
#include "ui_pgpromotion.h"

PGPromotion::PGPromotion(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PGPromotion)
{
    ui->setupUi(this);

    connect(ui->PBConfirm,&QPushButton::clicked,this,&PGPromotion::confirm);
    connect(ui->PBSave,&QPushButton::clicked,this,&PGPromotion::save);
    connect(ui->PBImport,&QPushButton::clicked,this,&PGPromotion::import);
    connect(ui->PBRefresh,&QPushButton::clicked,this,&PGPromotion::update);

}

PGPromotion::~PGPromotion()
{
    delete ui;
}

void PGPromotion::setPromotion(Promotion *promotion){
    this->promotion = promotion;
}


void PGPromotion::update(){
    Sale* sale = promotion->getSale();
    ui->line1->setText(QString::number(sale->getPointsDis(),'f',2));
    ui->line2->setText(QString::number(sale->getLevelDis(),'f',2));
    ui->line3->setText(QString::number(sale->getCorDis(),'f',2));
    ui->line4->setText(QString::number(sale->getPointsDis(),'f',2));

}

void PGPromotion::confirm(){
    promotion->setMemDis(ui->lineLevel->text().toDouble(),ui->lineCor->text().toDouble());
    promotion->setProDis(ui->linePro->text().toDouble());
    promotion->setPtDis(ui->linePoints->text().toDouble());
}

void PGPromotion::save(){
    promotion->write();
}
void PGPromotion::import(){

    std::string version = ui->lineVersion->text().toStdString();
    promotion->init(promotion->path / ("promotion" + version +".csv"));
    update();
}
// void update();
// void confirm();

// void save();
// void import();
