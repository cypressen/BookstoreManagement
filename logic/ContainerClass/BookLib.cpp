#include "BookLib.h"

BookLib::BookLib()
{
    lib = new std::unordered_map<Book, amount, BookHasher>;
}

BookLib::~BookLib()
{
    delete lib;
    lib = nullptr;
}

void BookLib::addBook(const Book &book, amount num)
{
    if (num == 0)
        return;
    if (lib->find(book) != lib->end())
    {
        (*lib)[book] += num;
    }
    else
    {
        (*lib)[book] = num;
    }
}

void BookLib::removeBook(const Book &book, amount num)
{
    std::unordered_map<Book, amount, BookHasher>::iterator it;
    it = lib->find(book);
    if (it == lib->end())
    {
        std::cout << "you can't remove a book that doesn't exit" << std::endl;
        return;
    }
    if (num == -1 || num >= it->second)
    {
        lib->erase(book);
    }
    else
    {
        it->second -= num;
    }
}

std::unordered_map<Book, amount, BookHasher> *BookLib::returnMap() const
{
    return lib;
}

std::string BookLib::toString() const
{
    if(lib->empty()){
        return "NULL";
    }
    std::string str = "Lib: ";
    for (const auto &item : *lib)
    {
        str += item.first.getTitle() + "[" + std::to_string(item.second) + "] ";
    }
    return str;
}

std::string BookLib::toFileStr() const
{
    std::string str;
    for (const auto &item : *lib)
    {
        str += item.first.toFileStr() + std::to_string(item.second);
    }
    str += "#";
    return str;
}

void BookLib::initFromFileVec(const std::vector<std::string> &vec)
{
    std::vector<std::string> vecForBook;
    int count = 0;
    for (const auto &item : vec)
    {
        if (count < 3)
        {
            count += 1;
            vecForBook.push_back(item);
        }
        else
        {
            Book temp;
            temp.initFromFileStr(vecForBook);
            addBook(temp, std::stoi(item));
            vecForBook.clear();
            count = 0;
        }
    }
}

void BookLib::initFromFileStr(const std::string &str)
{
    std::string temp;
    std::stringstream ss(str);
    std::vector<std::string> vecForBook;
    while (std::getline(ss, temp, '#'))
    {
        if (temp.empty())
        {
            continue;
        }
        vecForBook.push_back(temp);
    }
    initFromFileVec(vecForBook);
}