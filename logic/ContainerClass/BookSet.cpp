#include "BookSet.h"
BookSet::BookSet(){
    bookSet = new std::unordered_set<Book,BookHasher>;
}
BookSet::~BookSet(){
    delete bookSet;
    bookSet = nullptr;
}

void BookSet::addBook(const Book& b){
    bookSet->insert(b);
}

void BookSet::removeBook(const Book& b){
    bookSet->erase(b);
}

void BookSet::toFile(){
    #define file std::cout
        file<<"The book set has: \n";
    for(const auto& book : *bookSet){
        file<<book.getTitle()<<" ";
    }
    file<<'\n';
    #undef file
}