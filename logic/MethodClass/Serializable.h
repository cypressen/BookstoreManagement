#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H

#include <filesystem>
#include <fstream>

class Serializeble
{
public:
    std::filesystem::path targetDir = std::filesystem::path(__FILE__).parent_path().parent_path().parent_path()/"bank";
    const std::filesystem::path path;
    virtual void write() const = 0;
    virtual void init(std::filesystem::path ph) = 0;
};

#endif