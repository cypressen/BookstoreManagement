#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H

#include <filesystem>
#include <fstream>
#include <windows.h>

class Serializeble
{
public:
    std::filesystem::path getExecutablePath() {
        char buffer[MAX_PATH];
        GetModuleFileNameA(NULL, buffer, MAX_PATH);
        return std::filesystem::path(buffer).parent_path();
    }
    std::filesystem::path targetDir = getExecutablePath() /"bank";
    // std::filesystem::path targetDir = std::filesystem::path(__FILE__).parent_path().parent_path().parent_path()/"bank";
    const std::filesystem::path path;
    virtual void write() const = 0;
    virtual void init(std::filesystem::path ph) = 0;
};

#endif
