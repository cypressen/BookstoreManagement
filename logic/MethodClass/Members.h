#ifndef MEMBERS_H
#define MEMBERS_H

#include "Member.h"
#include <unordered_set>
#include <filesystem>
#include <fstream>

using memset = std::unordered_set<Member, MemberHasher>;

class Members
{
private:
    memset *indMems;
    memset *corMems;

    std::filesystem::path currentPath = std::filesystem::path(__FILE__);
    std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();

public:
    const std::filesystem::path path = targetDir / "src/Members";
    Members();
    ~Members();
    void addIndMem(const IndividualMem &mem);
    void addCorMem(const CorporateMem &mem);
    void removeIndMem(const IndividualMem &mem);
    void removeCorMem(const CorporateMem &mem);

    void setLevAndPoi(IndividualMem &mem, int level, int points);
    void setLevAndPoi(CorporateMem &mem, int level, int points);

    void writeToFile() const;
    void initFromFile(std::filesystem::path ph);
};

#endif