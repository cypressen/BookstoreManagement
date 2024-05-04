#include "Book.h"
#include <string>

Book::Book(const std::string &title, const std::string &press, double price)
    : title(title), press(press), price(price) {}

std::string Book::getID() const
{
    return title + press;
}

std::string Book::getTitle() const
{
    return title;
}

double Book::getPrice() const
{
    return price;
}

void Book::setPrice(double price)
{
    this->price = price;
}

bool Book::operator==(const Book &other) const
{

    if (this->getID() == other.getID())
    {
        return true;
    }
    return false;
}

size_t BookHasher::operator()(const Book &b) const
{
    return std::hash<std::string>()(b.getID());
}

std::string Book::toFileStr() const
{
    std::string str;
    str += "#" + title + "#" + press + "#" + std::to_string(price) + "#";
    return str;
}

void Book::initFromFileStr(const std::vector<std::string>& line){
        title = line[0];
        press = line[1];
        price = std::stod(line[2]);
}