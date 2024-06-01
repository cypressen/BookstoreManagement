#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <vector>
#include <iostream>
#include "Serializable.h"
#include <algorithm>

class Supplier : public Serializeble
{

private:
    std::vector<std::string> *buckets;


public:
    const std::filesystem::path path = targetDir / "Supplier";
    Supplier();
    ~Supplier();
    void add(const std::string name);
    void remove(const std::string name);
    std::vector<std::string>* get() const;
    void write() const;
    void init(std::filesystem::path ph);
};

#endif
