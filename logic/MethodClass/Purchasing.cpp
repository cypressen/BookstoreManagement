#include "Purchasing.h"

Purchasing::Purchasing()
{
    libPurchase = new BookLib;
    libReturn = new BookLib;
    std::filesystem::create_directories(path);
}

Purchasing::~Purchasing()
{
    delete libPurchase;
    delete libReturn;
}

void Purchasing::purchaseBook(const Book &book, int num)
{
    libPurchase->addBook(book, num);
}

void Purchasing::returnBook(const Book &book, int num)
{
    libReturn->addBook(book, num);
}


void Purchasing::puchaseRemove(const Book &book, int num){
    libPurchase->removeBook(book,num);
}
void Purchasing::returnRemove(const Book &book, int num){
    libReturn->removeBook(book,num);
}


BookLib* Purchasing::getLibPur() const{
    return libPurchase;
}
BookLib* Purchasing::getLibRet() const{
    return libReturn;
}

void Purchasing::write() const
{
    std::string preName = "purchasing";
    int i = 0;
    std::string dirName = preName + std::to_string(i);
    while (std::filesystem::exists(path / dirName))
    {
        i += 1;
        dirName = preName + std::to_string(i);
    }

    std::filesystem::create_directory(path / dirName);
    std::filesystem::path dirPath = path / dirName;

    std::ofstream ofile;
    ofile.open(dirPath / "libPurchase.csv", std::ios::out);
    ofile << libPurchase->toFileStr();
    ofile.close();

    ofile.open(dirPath / "libReturn.csv", std::ios::out);
    ofile << libReturn->toFileStr();
    ofile.close();
}

void Purchasing::init(std::filesystem::path ph)
{


    std::ifstream ifile;

    std::string temp;
    std::vector<std::string> vecToBookLib;

    ifile.open(ph / "libPurchase.csv", std::ios::in);
    std::getline(ifile,temp);
    libPurchase->initFromFileStr(temp);
    ifile.close();

    ifile.open(ph / "libReturn.csv", std::ios::in);
    std::getline(ifile,temp);
    libReturn->initFromFileStr(temp);   
    ifile.close();

}
