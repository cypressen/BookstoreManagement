#ifndef PROMOTION_H
#define PROMOTION_H


#include "Sale.h"
#include "Serializable.h"
/*
    输出格式
    各个折扣信息
*/
class Promotion : public Serializeble
{

private:
    Sale *linkedSale;
    double proDis;
    double levDis;
    double corDis;
    double ptDis;
public:
    const std::filesystem::path path = targetDir / "Promotion";
    Promotion(Sale &s);
    void setProDis(double dis);
    void setMemDis(double levDis, double corDis);
    void setPtDis(double dis);

    void write() const;
    void init(std::filesystem::path ph);
};
#endif