#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
class Book
{
private:
    std::string title;
    std::string press;
    double price;

public:
    Book(const std::string &title, const std::string &press,double price = 0.0);
    Book() = default;
    std::string getID() const;
    void setPrice(double price);
    double getPrice() const; 
    std::string getTitle() const;
    bool operator==(const Book &other) const;
    std::string toFileStr()const;
    void initFromFileStr(const std::vector<std::string>& line);
    // bool operator<(const Book &other) const;
};

class BookHasher
{
public:
    size_t operator()(const Book &b) const;
};
#endif