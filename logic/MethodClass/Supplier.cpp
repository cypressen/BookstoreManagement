#include "Supplier.h"
Supplier::Supplier(){
    buckets = new std::vector<std::string>;
    std::filesystem::create_directories(path);
}

Supplier::~Supplier(){
    delete buckets;
}

void Supplier::add(const std::string name){
   buckets->push_back(name);
}

void Supplier::remove(const std::string name){
   auto it = std::find(buckets->begin(),buckets->end(),name);
   if(it != buckets->end()){
    buckets->erase(it);
   }
}

void Supplier::writeToFile() const{
    std::ofstream ofile;
    std::string preName = "supplier";
    std::string format = ".csv";
    int i = 0;
    std::string fileName = preName + std::to_string(i) + format;
    while(std::filesystem::exists(path/fileName)){
        i += 1;
        fileName = preName +std::to_string(i)+format;
    }

    ofile.open(path/fileName,std::ios::out);
    for(const auto& s : *buckets){

        ofile<< s<<'\n';
    }
    ofile.close();
}


void Supplier::initFromFile(std::filesystem::path ph){
    std::ifstream ifile;
    ifile.open(ph,std::ios::in);
    std::string line;
    buckets->clear();
    while(std::getline(ifile,line)){
        if(line.empty())break;
        buckets->push_back(line);
    }
    ifile.close();
}
