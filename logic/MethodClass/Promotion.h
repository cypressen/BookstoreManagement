#ifndef PROMOTION_H
#define PROMOTION_H

#include <filesystem>
#include <fstream>
#include "Sale.h"

class Promotion
{

private:
    Sale *linkedSale;
    double proDis;
    double levDis;
    double corDis;
    double ptDis;
    std::filesystem::path currentPath = std::filesystem::path(__FILE__);
    std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();
public:
    const std::filesystem::path path = targetDir / "src/Promotion";
    Promotion(Sale &s);
    void setProDis(double dis);
    void setMemDis(double levDis, double corDis);
    void setPtDis(double dis);

    void writeToFile() const;
    void initFromFile(std::filesystem::path ph);
};
#endif