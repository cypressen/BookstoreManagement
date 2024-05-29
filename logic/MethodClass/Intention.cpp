#include "Intention.h"

Intention::Intention()
{
    individualLack = new std::vector<std::vector<std::string>>;
    corporateWonder = new std::vector<std::vector<std::string>>;
    std::filesystem::create_directories(path);
}

Intention::~Intention()
{
    delete individualLack;
    delete corporateWonder;
}

std::vector<std::string> libToStringVec(const BookLib &bookLib)
{
    auto getMap = bookLib.returnMap();
    std::vector<std::string> vec;
    // if(getMap->empty()) return vec;
    for (const auto &item : *getMap)
    {
        std::string temp;
        temp += item.first.getTitle() + "[" + std::to_string(item.second) + "]";
        vec.push_back(temp);
    }
    return vec;
}

std::vector<std::string> add(const Member &mem, const BookLib &bookList)
{
    std::vector<std::string> addition;
    if (bookList.returnMap()->empty())
    {
        return addition;
    }

    addition.push_back(mem.getName());
    auto libVec = libToStringVec(bookList);
    addition.insert(addition.end(), libVec.begin(), libVec.end());
    return addition;
}

void Intention::addIndLack(const IndividualMem &mem, const BookLib &bookList)
{
    auto addition = add(mem, bookList);
    if (addition.empty())
        return;
    individualLack->push_back(addition);
}

void Intention::addCorWonder(const CorporateMem &mem, const BookLib &bookList)
{
    auto addition = add(mem, bookList);
    if (addition.empty())
        return;
    corporateWonder->push_back(addition);
}

// std::string Intention::toString() const
// {
//     std::string str = "Lack: \n";
//     for (const auto &s : *individualLack)
//     {
//         str += s + "\n";
//     }
//     str += "Wonder: \n";
//     for (const auto &s : *corporateWonder)
//     {
//         str += s + "\n";
//     }
//     return str;
// }

std::vector<std::vector<std::string>> *Intention::toStringVecInd() const
{
    return individualLack;
}
std::vector<std::vector<std::string>> *Intention::toStringVecCor() const
{
    return corporateWonder;
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

    for (const auto &vec : *individualLack)
    {
        for (const auto &str : vec)
        {
            ofile << str << "#";
        }
        ofile << '\n';
    }
    ofile.close();
    ofile.open(dirPath / "corporateWonder.csv", std::ios::out);
    for (const auto &vec : *corporateWonder)
    {
        for (const auto &str : vec)
        {
            ofile << str << "#";
        }
        ofile << '\n';
    }
    ofile.close();
}

void Intention::init(std::filesystem::path ph)
{
    std::ifstream ifile;
    std::string line;
    ifile.open(ph / "individualLack.csv", std::ios::in);
    // 考虑lambda消除重复代码
    while (std::getline(ifile, line))
    {
        if (line.empty())
            continue;
        std::stringstream ss(line);
        std::vector<std::string> vec;
        std::string temp;
        while (std::getline(ss, temp, '#'))
        {
            if (temp.empty())
                continue;
            vec.push_back(temp);
        }
        individualLack->push_back(vec);
    }
    ifile.close();

    ifile.open(ph / "corporateWonder.csv", std::ios::in);

    while (std::getline(ifile, line))
    {
        if (line.empty())
            continue;
        std::stringstream ss(line);
        std::vector<std::string> vec;
        std::string temp;
        while (std::getline(ss, temp, '#'))
        {
            if (temp.empty())
                continue;
            vec.push_back(temp);
        }
        corporateWonder->push_back(vec);
    }
    ifile.close();
}