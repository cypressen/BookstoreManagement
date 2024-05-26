#include "Members.h"

Members::Members()
{
    indMems = new memset;
    corMems = new memset;
    std::filesystem::create_directories(path);
}

Members::~Members()
{
    delete indMems;
    delete corMems;
}

void Members::addIndMem(const IndividualMem &mem)
{
    indMems->insert(mem);
}

void Members::addCorMem(const CorporateMem &mem)
{
    corMems->insert(mem);
}

void Members::removeIndMem(const IndividualMem &mem)
{
    indMems->erase(mem);
}

void Members::removeCorMem(const CorporateMem &mem)
{
    corMems->erase(mem);
}

void Members::setLevAndPoi(IndividualMem &mem, int level, int points)
{
    IndividualMem copy = mem;
    removeIndMem(mem);
    copy.changeLevel(level);
    copy.changePoints(points);
    addIndMem(copy);
}

void Members::setLevAndPoi(CorporateMem &mem, int level, int points)
{
    CorporateMem copy = mem;
    removeCorMem(mem);
    copy.changeLevel(level);
    copy.changePoints(points);
    addCorMem(copy);
}
void Members::writeToFile() const
{
    std::string preName = "members";
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
    ofile.open(dirPath / "indMems.csv", std::ios::out);
    for (const auto &x : *indMems)
    {
        ofile << x.toFileString() << '\n';
    }
    ofile.close();
    ofile.open(dirPath / "corMems.csv", std::ios::out);
    for (const auto &x : *corMems)
    {
        ofile << x.toFileString() << '\n';
    }
    ofile.close();
}

void Members::initFromFile(std::filesystem::path ph)
{
    std::ifstream ifile;
    std::string line;
    ifile.open(ph / "indMems.csv", std::ios::in);
    while (std::getline(ifile, line))
    {
        if (line.empty())
            break;
        IndividualMem *mem = new IndividualMem();
        mem->initFromFileString(line);
        addIndMem(*mem);
    }
    ifile.close();

    ifile.open(ph / "corMems.csv", std::ios::in);
    while (std::getline(ifile, line))
    {
        if (line.empty())
            break;
        CorporateMem *mem = new CorporateMem();
        mem->initFromFileString(line);
        addCorMem(*mem);
    }
    ifile.close();
}