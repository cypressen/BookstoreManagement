#ifndef INVENTORY_H
#define INVENTORY_H

#include "BookLib.h"
#include <fstream>
#include <filesystem>
class Inventory : public BookLib
{
private:
    std::filesystem::path currentPath = std::filesystem::path(__FILE__);
    std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();

public:
    const std::filesystem::path  path = targetDir / "src/Inventory";
    Inventory();
    void writeToFile() const;
    void getFromFile(std::filesystem::path ph);
};
class BookList : public BookLib
{
};

#endif