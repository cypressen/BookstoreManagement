#ifndef PRESS_H
#define PRESS_H

#include <vector>
#include <iostream>
#include "Serializable.h"
#include <algorithm>

class Press : public Serializeble
{

private:
    std::vector<std::string> *buckets;


public:
    const std::filesystem::path path = targetDir / "Press";
    Press();
    ~Press();
    void add(const std::string name);
    void remove(const std::string name);
    std::vector<std::string>* get() const;
    void write() const;
    void init(std::filesystem::path ph);
};

#endif
