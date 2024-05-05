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
    void changeLevel(int lev);
    void changePoints(int poi);

    std::string getName() const;
    int getLevel() const;
    int getPoints() const;

    virtual std::string toString() const = 0;
};

class IndividualMem : public Member
{
private:
    BookLib *lack;

public:
    IndividualMem(std::string name, int level = 0, int points = 0);
    void setLackList(BookLib& lib);
    BookLib *getLackedLib() const;
    std::string toString() const override;
    ~IndividualMem();
};

class CorporateMem : public Member
{
private:
    BookLib *wonder;

public:
    CorporateMem(std::string name, int level = 0, int points = 0);
    void setWonderList(BookLib& lib);
    BookLib *getWonderedLib() const;
    std::string toString() const override;
    ~CorporateMem();
};
#endif