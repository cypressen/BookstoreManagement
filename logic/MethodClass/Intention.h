#ifndef INTENTION_H
#define INTENTION_H

#include "Member.h"
#include "BookLib.h"
#include <vector>
#include "Serializable.h"
class Intention : public Serializeble
{

    /*
        输出格式
        姓名 缺书书单
        考虑std::vector<std::vector<std::string>
        一个单位的toSringVec返回一个vector
        单位对应的是Member
        所以Member要实现一个toStringVec 返回整合好了的vector 然后再通过筛选组成新的vector 再push_back
    */
private:
    std::vector<std::vector<std::string>> *individualLack;
    std::vector<std::vector<std::string>> *corporateWonder;


public:
    const std::filesystem::path path = targetDir / "Intention";

    Intention();
    ~Intention();
    void addIndLack(const IndividualMem &mem,const BookLib& bookList);
    void addCorWonder(const CorporateMem &mem,const BookLib& bookList);
    //第一个元素为姓名 剩下的所有元素都为缺书情况
    std::vector<std::vector<std::string>>* toStringVecInd() const;
    std::vector<std::vector<std::string>>* toStringVecCor() const;

    void write() const;
    void init(std::filesystem::path ph);
};

#endif