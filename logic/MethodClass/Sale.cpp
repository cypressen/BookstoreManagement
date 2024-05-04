#include "Sale.h"

Sale::Sale(Inventory &inven)
{
    discountForPromotion = 0.0;
    discountForPoints = 0.05;
    discountForLevel = 0.1;
    discountForCorp = 0.3;

    saleForNormal = new saleMap;
    saleForIndMem = new saleMap;
    saleForCorMem = new saleMap;

    linkedInventory = &inven;

    std::filesystem::create_directories(path);
}

Sale::~Sale()
{
    delete saleForNormal;
    delete saleForIndMem;
    delete saleForCorMem;
}

// helper For all customer
double sale(Inventory &inven, const BookLib &bl, BookLib &record)
{
    double bill = 0.0;
    auto getBillMap = bl.returnMap();
    auto getInvenMap = inven.returnMap();
    for (const auto &item : *getBillMap)
    {
        if (getInvenMap->find(item.first) == getInvenMap->end())
        {
            std::cout << "This inventory doesn't contain this book: " << item.first.getTitle() << std::endl;
            continue;
        }
        int getAmount = (*getInvenMap)[item.first];
        int need = item.second;
        if (getAmount <= need)
        {
            bill += getAmount * (item.first.getPrice());
            inven.removeBook(item.first);
            record.addBook(item.first, getAmount);
        }
        else
        {
            bill += need * (item.first.getPrice());
            inven.removeBook(item.first, need);
            record.addBook(item.first, need);
        }
    }

    return bill;
}
double Sale::normalBuy(const std::string &name, const BookLib &bl)
{
    // auto getMap = bl.returnMap();
    // auto getInvenMap = linkedInventory->returnMap();

    // BookLib record;
    // double bill = 0.0;
    // for (const auto &item : *getMap)
    // {
    //     if (getInvenMap->find(item.first) == getInvenMap->end())
    //     {
    //         std::cout << "This inventory doesn't contain this book: " << item.first.getTitle() << std::endl;
    //         continue;
    //     }
    //     int getAmount = (*getInvenMap)[item.first];
    //     int need = item.second;
    //     if (getAmount <= need)
    //     {
    //         bill += getAmount * (item.first.getPrice());
    //         linkedInventory->removeBook(item.first);
    //         record.addBook(item.first, getAmount);
    //     }
    //     else
    //     {
    //         bill += need * (item.first.getPrice());
    //         linkedInventory->removeBook(item.first, need);
    //         record.addBook(item.first, need);
    //     }
    // }

    // bill *= (1.0 - discountForPromotion);
    // std::string strRec = "  Bill: " + std::to_string(bill) + "   " + record.toString();
    // saleForNormal->insert(std::make_pair(name, strRec));
    // return bill;
    BookLib record;
    double bill = sale(*linkedInventory, bl, record);
    bill *= (1.0 - discountForPromotion);
    if (bill < 0)
    {
        bill = 0;
    }
    std::string strRec = " Bill: " + std::to_string(bill) + "\t" + record.toString();
    saleForNormal->insert(std::make_pair(name, strRec));
    return bill;
}
// helper for all Member
void discountForMem(double &bill, Member &mem, int points, double discountForPoints, double discountForLevel)
{
    if (points >= mem.getPoints())
        points = mem.getPoints();
    int n = points / 50;
    mem.changePoints(mem.getPoints() - n * 50);
    bill *= (1.0 - (n * discountForPoints));
    bill *= (1.0 - mem.getLevel() * discountForLevel);
    if (bill < 0)
    {
        bill = 0;
    }
}
double Sale::indMemBuy(IndividualMem &mem, const BookLib &bookList, int points)
{
    BookLib record;
    double bill = sale(*linkedInventory, bookList, record);
    bill *= (1.0 - discountForPromotion);
    discountForMem(bill, mem, points, discountForPoints, discountForLevel);
    std::string strRec = " Bill: " + std::to_string(bill) + "\t" + record.toString();
    saleForIndMem->insert(std::make_pair(mem.getName(), strRec));
    return bill;
}

double Sale::corMemBuy(CorporateMem &mem, const BookLib &bookList, int points)
{
    BookLib record;
    double bill = sale(*linkedInventory, bookList, record);
    bill *= (1.0 - discountForPromotion);
    discountForMem(bill, mem, points, discountForPoints, discountForLevel);
    bill *= (1.0 - discountForCorp);
    std::string strRec = " Bill: " + std::to_string(bill) + "\t" + record.toString();
    saleForCorMem->insert(std::make_pair(mem.getName(), strRec));
    return bill;
}

std::string Sale::toString() const
{

    std::string str = "Sales For Nomal Customers: \n";
    for (const auto &item : *saleForNormal)
        str += item.first + item.second + "\n";
    str += "Sales For Individual Member: \n";
    for (const auto &item : *saleForIndMem)
        str += item.first + item.second + "\n";
    str += "Sales For Corporate Member: \n";
    for (const auto &item : *saleForCorMem)
        str += item.first + item.second + "\n";
    return str;
}

void Sale::writeToFile() const
{
    std::ofstream ofile;
    std::string preName = "sale";
    int i = 0;
    std::string dirName = preName + std::to_string(i);
    while (std::filesystem::exists(path / dirName))
    {
        i += 1;
        dirName = preName + std::to_string(i);
    }

    std::filesystem::path dirPath = path / dirName;
    std::filesystem::create_directory(dirPath);
    ofile.open(dirPath / "discountData.csv", std::ios::out);
    ofile << discountForPromotion << '\n';
    ofile << discountForPoints << '\n';
    ofile << discountForLevel << '\n';
    ofile << discountForCorp << '\n';

    ofile.close();

    ofile.open(dirPath / "saleForNomal.csv", std::ios ::out);
    for (const auto &item : *saleForNormal)
    {
        ofile << item.first << '#' << item.second << "#\n";
    }
    ofile.close();

    ofile.open(dirPath / "saleForIndMem.csv", std::ios ::out);
    for (const auto &item : *saleForIndMem)
    {
        ofile << item.first << '#' << item.second << "#\n";
    }
    ofile.close();

    ofile.open(dirPath / "saleForCorMem.csv", std::ios ::out);
    for (const auto &item : *saleForCorMem)
    {
        ofile << item.first << '#' << item.second << "#\n";
    }
    ofile.close();
}

void Sale::initFromFile(std::filesystem::path ph)
{
    std::ifstream ifile;
    std::string temp;

    ifile.open(ph / "discountData.csv", std::ios::in);
    std::getline(ifile, temp);
    if (!temp.empty())
        discountForPromotion = std::stod(temp);
    std::getline(ifile, temp);
    if (!temp.empty())
        discountForPoints = std::stod(temp);
    std::getline(ifile, temp);
    if (!temp.empty())
        discountForLevel = std::stod(temp);
    std::getline(ifile, temp);
    if (!temp.empty())
        discountForCorp = std::stod(temp);
    ifile.close();

    ifile.open(ph / "saleForNomal.csv", std::ios::in);
    while (std::getline(ifile, temp))
    {
        std::stringstream ss(temp);
        std::string i1;
        std::string i2;
        std::getline(ss, i1, '#');
        std::getline(ss, i2, '#');
        (*saleForNormal)[i1] = i2;
    }
    ifile.close();

    ifile.open(ph / "saleForIndMem.csv", std::ios::in);
    while (std::getline(ifile, temp))
    {
        std::stringstream ss(temp);
        std::string i1;
        std::string i2;
        std::getline(ss, i1, '#');
        std::getline(ss, i2, '#');
        (*saleForIndMem)[i1] = i2;
    }
    ifile.close();

    ifile.open(ph / "saleForCorMem.csv", std::ios::in);
    while (std::getline(ifile, temp))
    {
        std::stringstream ss(temp);
        std::string i1;
        std::string i2;
        std::getline(ss, i1, '#');
        std::getline(ss, i2, '#');
        (*saleForCorMem)[i1] = i2;
    }
    ifile.close();
}