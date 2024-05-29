#ifndef SALE_H
#define SALE_H

#include "Member.h"
#include "BookLib.h"
#include "Inventory.h"
#include "Serializable.h"
#include <unordered_map>

using saleMap = std::unordered_map<std::string, std::string>;


/*
    输出格式
    分为显示当前折扣
    再分别显示
    普通顾客购买 名称 购买的书 总价格
    个人会员购买 名称 购买的书 总价格
    企业会员购买 名称 购买的书 总价格
*/
class Sale : public Serializeble
{
private:
    double discountForPromotion;
    double discountForPoints;
    double discountForLevel;
    double discountForCorp;
    saleMap *saleForNormal;
    saleMap *saleForIndMem;
    saleMap *saleForCorMem;
    Inventory *linkedInventory;



public:
    const std::filesystem::path path = targetDir / "Sale";
    Sale(Inventory &inven);
    ~Sale();
    double normalBuy(const std::string &name, const BookLib &bookList);
    double indMemBuy(IndividualMem &mem, const BookLib &bookList, int points = 0);
    double corMemBuy(CorporateMem &mem, const BookLib &bookList, int points = 0);
    
    void setProDis(double dis);
    void setMemDis(double levDis,double corDis);
    void setPtDis(double dis);
    
    std::string toString() const;

    void write() const;
    void init(std::filesystem::path ph);
};

#endif