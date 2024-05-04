#ifndef BOOKLIB_H
#define BOOKLIB_H

#include "Book.h"
#include <unordered_map>
#include <vector>
#include <filesystem>
using amount = int;
class BookLib{

private:
    std::unordered_map<Book,amount,BookHasher> *lib;

public:
    BookLib();
    ~BookLib();

    void addBook(const Book& book, amount num);
    void removeBook(const Book& book,amount num = -1);
    std::unordered_map<Book,amount,BookHasher> *returnMap() const;
    std::string toString() const;
    
    std::string toFileStr() const;
    void initFromFileVec(const std::vector<std::string>& vec);
    void initFromFileStr(const std::string& str);

};


#endif