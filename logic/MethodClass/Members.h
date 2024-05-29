#ifndef MEMBERS_H
#define MEMBERS_H

#include "Member.h"
#include <unordered_set>
#include "Serializable.h"

/*
    输出格式
    昵称 等级 积分
    同样需要Member实现toStringVec()

*/
using memset = std::unordered_set<Member, MemberHasher>;

class Members  : public Serializeble
{
private:
    memset *indMems;
    memset *corMems;

public:
    const std::filesystem::path path = targetDir / "Members";
    Members();
    ~Members();
    void addIndMem(const IndividualMem &mem);
    void addCorMem(const CorporateMem &mem);
    void removeIndMem(const IndividualMem &mem);
    void removeCorMem(const CorporateMem &mem);

    void setLevAndPoi(IndividualMem &mem, int level, int points);
    void setLevAndPoi(CorporateMem &mem, int level, int points);

    void write() const;
    void init(std::filesystem::path ph);
};

#endif