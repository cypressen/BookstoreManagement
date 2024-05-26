#include "Promotion.h"

Promotion::Promotion(Sale &s)
{
    linkedSale = &s;
    proDis = levDis = corDis = ptDis = 0;
    std::filesystem::create_directories(path);
}

void Promotion::setMemDis(double levDis, double corDis)
{
    this->levDis = levDis;
    this->corDis = corDis;
    linkedSale->setMemDis(levDis, corDis);
}

void Promotion::setProDis(double dis)
{
    this->proDis = dis;
    linkedSale->setProDis(dis);
}

void Promotion::setPtDis(double dis)
{
    this->ptDis = dis;
    linkedSale->setPtDis(dis);
}

void Promotion::writeToFile() const
{
    std::ofstream ofile;
    std::string preName = "promotion";
    std::string format = ".csv";
    int i = 0;
    std::string fileName = preName + std::to_string(i) + format;
    while (std::filesystem::exists(path / fileName))
    {
        i += 1;
        fileName = preName + std::to_string(i) + format;
    }

    ofile.open(path / fileName, std::ios::out);
    ofile << proDis << '\n'
          << levDis << '\n'
          << corDis << '\n'
          << ptDis;
    ofile.close();
}

void Promotion::initFromFile(std::filesystem::path ph)
{
    std::ifstream ifile;
    ifile.open(ph, std::ios::in);
    std::string line;
    std::getline(ifile, line);
    proDis = std::stod(line);
    std::getline(ifile, line);
    levDis = std::stod(line);
    std::getline(ifile, line);
    corDis = std::stod(line);
    std::getline(ifile, line);
    ptDis = std::stod(line);
    setProDis(proDis);
    setMemDis(levDis,corDis);
    setPtDis(ptDis);
}