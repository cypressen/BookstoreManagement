#ifndef MEMBER_H
#define MEMBER_H

#include "BookLib.h"

class Member
{
protected:
    std::string name;
    int level;
    int points;

public:
    Member(std::string name, int level = 0, int points = 0);
    Member() = default;

    Member(const Member &other);

    void changeLevel(int lev);
    void changePoints(int poi);

    std::string getName() const;
    int getLevel() const;
    int getPoints() const;

    bool operator==(const Member &other) const;

    std::string toFileString() const;
    void initFromFileString(const std::string &str);

    virtual std::vector<std::string> toStringVec() const;
};

class IndividualMem : public Member
{
private:
    BookLib *lack;

public:
    IndividualMem(std::string name, int level = 0, int points = 0);
    IndividualMem() = default;
    void setLackList(BookLib &lib);
    BookLib *getLackedLib() const;
    std::vector<std::string> toStringVec() const;
};

class CorporateMem : public Member
{
private:
    BookLib *wonder;

public:
    CorporateMem(std::string name, int level = 0, int points = 0);
    CorporateMem() = default;
    void setWonderList(BookLib &lib);
    BookLib *getWonderedLib() const;

    std::vector<std::string> toStringVec() const;
};

class MemberHasher
{
public:
    size_t operator()(const Member &m) const;
};
#endif