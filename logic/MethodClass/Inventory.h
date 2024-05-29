#ifndef INVENTORY_H
#define INVENTORY_H

#include "BookLib.h"
#include "Serializable.h"

/*
    输出格式:
    书名 出版社 价格 库存数量
    Inventory共有继承书库 则需要书库的toStringVec()
*/
class Inventory : public BookLib, public Serializeble
{
private:


public:
    const std::filesystem::path path = targetDir / "Inventory";
    Inventory();
    void write() const;
    void init(std::filesystem::path ph);
};
class BookList : public BookLib
{
};

#endif