#ifndef INTENTION_H
#define INTENTION_H

#include "Member.h"
#include <vector>
#include <filesystem>
#include <fstream>
class Intention
{

private:
    std::vector<std::string> *individualLack;
    std::vector<std::string> *corporateWonder;

    std::filesystem::path currentPath = std::filesystem::path(__FILE__);
    std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();

public:
    const std::filesystem::path path = targetDir / "src/Intention";
    Intention();
    ~Intention();
    void addIndLack(const IndividualMem &mem);
    void addCorWonder(const CorporateMem &mem);
    std::string toString() const;

    void writeToFile() const;
    void initFromFile(std::filesystem::path ph);
};

#endif