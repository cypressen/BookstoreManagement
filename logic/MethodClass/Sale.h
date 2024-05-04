#ifndef SALE_H
#define SALE_H

#include "Member.h"
#include "BookLib.h"
#include "Inventory.h"
#include <unordered_map>

using saleMap = std::unordered_map<std::string, std::string>;
class Sale
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
    
    std::filesystem::path currentPath = std::filesystem::path(__FILE__);
    std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();

public:
    const std::filesystem::path path = targetDir / "src/Sale";
    Sale(Inventory &inven);
    ~Sale();
    double normalBuy(const std::string &name, const BookLib &bookList);
    double indMemBuy(IndividualMem &mem, const BookLib &bookList, int points = 0);
    double corMemBuy(CorporateMem &mem, const BookLib &bookList, int points = 0);
    std::string toString() const;

    void writeToFile() const;
    void initFromFile(std::filesystem::path ph);
};

#endif