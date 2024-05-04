#ifndef PURCHASEING_H
#define PURCHASING_H

#include "BookLib.h"
#include <filesystem>
#include <fstream>
class Purchasing
{

private:
    BookLib *libPurchase; // 进货
    BookLib *libReturn;   // 退货
    std::filesystem::path currentPath = std::filesystem::path(__FILE__);
    std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();

public:
    const std::filesystem::path path = targetDir / "src/Purchasing";
    Purchasing();
    ~Purchasing();
    void purchaseBook(const Book &book, int num);
    void returnBook(const Book &book, int num);
    // void do(const BookLib&other); // merge
    std::string toString()const;

    void writeToFile() const;
    void initFromFile(std::filesystem::path ph);
};

#endif