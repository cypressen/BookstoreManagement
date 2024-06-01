#ifndef BOOKLIB_H
#define BOOKLIB_H

#include "Book.h"
#include <unordered_map>
#include <vector>
#include <filesystem>
using amount = int;
class BookLib{

private:
    std::unordered_map<Book,amount,BookHasher> *lib; // 一个stl容器，使用了自定义类型作为key值，因此要追加一个对应的hash函数

public:
    BookLib();
    ~BookLib();

    void addBook(const Book& book, amount num);
    void removeBook(const Book& book,amount num = -1);

    std::unordered_map<Book,amount,BookHasher> *returnMap() const;

    std::string toString() const;
    
    std::string toFileStr() const; // 转化为用于写入文件的字符串
    void initFromFileVec(const std::vector<std::string>& vec); //一个helper method of initFromFileStr
    void initFromFileStr(const std::string& str);

};


#endif
