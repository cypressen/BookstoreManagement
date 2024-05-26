#include "Member.h"

Member::Member(std::string name, int level, int points)
    : name(name), level(level), points(points) {}

Member::Member(const Member& other){
    this->name = other.name;
    this->level = other.level;
    this->points =other.points;
}
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

bool Member::operator==(const Member &other) const
{
    if (this->name == other.name)
    {
        return true;
    }
    return false;
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

std::string Member::toFileString() const
{
    std::string str;
    str += name + "#" + std::to_string(level) + "#" + std::to_string(points) + "#";
    return str;
}

void Member::initFromFileString(const std::string & str){
    std::string line;
    std::stringstream ss(str);
    std::getline(ss,line,'#');
    name = line;
    std::getline(ss,line,'#');
    level = std::stoi(line);
    std::getline(ss,line,'#');
    points =std::stoi(line);

}

IndividualMem::IndividualMem(std::string name, int level, int points)
    : Member(name, level, points)
{
    lack = new BookLib;
}

IndividualMem::~IndividualMem()
{
    
}

void IndividualMem::setLackList(BookLib &lib)
{
    lack = &lib;
}
BookLib *IndividualMem::getLackedLib() const
{
    return lack;
}

// std::string IndividualMem::toString() const
// {
//     std::string str = "name: " + name + " level: " + std::to_string(level) + " points: " + std::to_string(points) + " " + lack->toString();
//     return str;
// }


CorporateMem::CorporateMem(std::string name, int level, int points)
    : Member(name, level, points)
{
    wonder = new BookLib;
}

CorporateMem::~CorporateMem()
{
    
}

void CorporateMem::setWonderList(BookLib &lib)
{

    wonder = &lib;
}
BookLib *CorporateMem::getWonderedLib() const
{
    return wonder;
}

// std::string CorporateMem::toString() const
// {

//     std::string str = "name: " + name + " level: " + std::to_string(level) + " points: " + std::to_string(points) + " " + wonder->toString();
//     return str;
// }

size_t MemberHasher::operator()(const Member &m) const
{
    return std::hash<std::string>()(m.getName());
}