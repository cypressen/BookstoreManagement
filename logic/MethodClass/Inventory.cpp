#include "Inventory.h"

Inventory::Inventory()
{
    // if (!std::filesystem::exists(path))
    std::filesystem::create_directories(path);
}

void Inventory::write() const
{

    std::ofstream ofile;

    std::string preName = "inventory";
    std::string fomat = ".csv";
    std::string filename;
    int i = 0;
    filename = preName + std::to_string(i) + fomat;
    while (std::filesystem::exists(path / filename))
    {   
        i += 1;
        filename = preName + std::to_string(i) + fomat;
    }


    ofile.open(path / filename, std::ios::out);

    ofile << BookLib::toFileStr();
    ofile.close();
}

void Inventory::init(std::filesystem::path ph)
{
    std::ifstream ifile;
    ifile.open(ph, std::ios::in);
    std::string line;
    std::getline(ifile, line);
    BookLib::initFromFileStr(line);
    ifile.close();
}