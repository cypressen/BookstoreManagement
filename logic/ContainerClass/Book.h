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
    Book(const std::string &title, const std::string &press = "",double price = 0.0);
    Book() = default;
    std::string getID() const; // return title + press
    void setPrice(double price);
    double getPrice() const; 
    std::string getTitle() const;
    std::string getPress() const;
    bool operator==(const Book &other) const; // 辅助用于BookHasher
    std::string toFileStr()const; // 转换为用于写入文件的字符串
    void initFromFileStr(const std::vector<std::string>& line); // 从对应的字符串初始化该对象
    // bool operator<(const Book &other) const;
};

class BookHasher // 为了使用unordered_map储存Book类型
{
public:
    size_t operator()(const Book &b) const;
};
#endif
