#ifndef PURCHASING_H
#define PURCHASING_H

#include "BookLib.h"
#include "Serializable.h"

/*
    由于主要储存的类型都是BookLib 和inventory一样的输出格式
    
*/
class Purchasing : public Serializeble
{

private:
    BookLib *libPurchase; // 进货
    BookLib *libReturn;   // 退货


public:
    const std::filesystem::path path = targetDir / "Purchasing";
    Purchasing();
    ~Purchasing();
    void purchaseBook(const Book &book, int num);
    void returnBook(const Book &book, int num);

    void puchaseRemove(const Book &book, int num);
    void returnRemove(const Book &book, int num);

    BookLib* getLibPur() const;
    BookLib* getLibRet() const;


    void write() const;
    void init(std::filesystem::path ph);
};

#endif
