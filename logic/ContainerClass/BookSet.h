#ifndef BOOKSET_H
#define BOOKSET_H

#include "Book.h"

#include <unordered_set>

class BookSet
{
private:
    std::unordered_set<Book,BookHasher> * bookSet;

public:
    BookSet();
    ~BookSet();
    void addBook(const Book& b);
    void removeBook(const Book& b);
    void toFile();
};

#endif