#include "Member.h"

Member::Member(std::string name, int level, int points)
    : name(name), level(level), points(points) {}

void Member::changeLevel(int lev)
{
    level = lev;
    if (level < 0)
    {
        level = 0;
    }
}

void Member::changePoints(int poi)
{
    points = poi;
    if (points < 0)
    {
        points = 0;
    }
}

std::string Member::getName() const
{
    return name;
}

int Member::getLevel() const
{
    return level;
}

int Member::getPoints() const
{
    return points;
}

//

IndividualMem::IndividualMem(std::string name, int level, int points)
    : Member(name, level, points)
{
    lack = new BookLib;
}

IndividualMem::~IndividualMem()
{
    delete lack;
}

BookLib *IndividualMem::getLackedLib() const
{
    return lack;
}

std::string IndividualMem::toString() const
{
    std::string str ="name: " + name +" level: "+std::to_string(level) + " points: " + std::to_string(points) +" "+lack->toString();
    return str;
}

//
CorporateMem::CorporateMem(std::string name, int level, int points)
    : Member(name, level, points)
{
    wonder = new BookLib;
}

CorporateMem::~CorporateMem()
{
    delete wonder;
}

BookLib* CorporateMem::getWonderedLib() const{
    return wonder;
}

std::string CorporateMem::toString() const
{
    
    std::string str ="name: " + name +" level: "+std::to_string(level) + " points: " + std::to_string(points) +" "+wonder->toString();
    return str;
}
