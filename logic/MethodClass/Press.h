#ifndef PRESS_H
#define PRESS_H

#include <vector>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <algorithm>

class Press
{

private:
    std::vector<std::string> *buckets;
    std::filesystem::path currentPath = std::filesystem::path(__FILE__);
    std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();

public:
    const std::filesystem::path path = targetDir / "src/Press";
    Press();
    ~Press();
    void add(const std::string name);
    void remove(const std::string name);
    void writeToFile() const;
    void initFromFile(std::filesystem::path ph);
};

#endif