#include "Intention.h"

Intention::Intention()
{
    individualLack = new std::vector<std::string>;
    corporateWonder = new std::vector<std::string>;
    std::filesystem::create_directories(path);
}

Intention::~Intention()
{
    delete individualLack;
    delete corporateWonder;
}

void Intention::addIndLack(const IndividualMem &mem)
{
    if (mem.getLackedLib()->returnMap()->empty())
    {
        return;
    }
    individualLack->push_back(mem.toFileString());
}

void Intention::addCorWonder(const CorporateMem &mem)
{
    if (mem.getWonderedLib()->returnMap()->empty())
    {
        return;
    }
    corporateWonder->push_back(mem.toFileString());
}

std::string Intention::toString() const
{
    std::string str = "Lack: \n";
    for (const auto &s : *individualLack)
    {
        str += s + "\n";
    }
    str += "Wonder: \n";
    for (const auto &s : *corporateWonder)
    {
        str += s + "\n";
    }
    return str;
}

std::vector<std::vector<std::string>> Intention::toStringVecInd() const
{
    std::vector<std::vector<std::string>> vecVec;
    for (const auto &string : *individualLack)
    {
        if(string.empty()){
            continue;
        }
        
    }
    return vecVec;
}
void Intention::write() const
{

    std::string preName = "intention";
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
    ofile.open(dirPath / "individualLack.csv", std::ios::out);
    for (const auto &str : *individualLack)
    {
        ofile << str << '\n';
    }
    ofile.close();
    ofile.open(dirPath / "corporateWonder.csv", std::ios::out);
    for (const auto &str : *corporateWonder)
    {
        ofile << str << '\n';
    }
    ofile.close();
}

void Intention::init(std::filesystem::path ph)
{
    std::ifstream ifile;
    std::string temp;
    ifile.open(ph / "individualLack.csv", std::ios::in);
    while (std::getline(ifile, temp))
    {
        if (temp.empty())
        {
            continue;
        }
        individualLack->push_back(temp);
    }
    ifile.close();

    ifile.open(ph / "corporateWonder.csv", std::ios::in);
    while (std::getline(ifile, temp))
    {
        if (temp.empty())
        {
            continue;
        }
        corporateWonder->push_back(temp);
    }
    ifile.close();
}