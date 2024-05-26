#include "Press.h"
Press::Press(){
    buckets = new std::vector<std::string>;
    std::filesystem::create_directories(path);
}

Press::~Press(){
    delete buckets;
}

void Press::add(const std::string name){
   buckets->push_back(name);
}

void Press::remove(const std::string name){
   auto it = std::find(buckets->begin(),buckets->end(),name);
   if(it != buckets->end()){
    buckets->erase(it);
   }
}

void Press::writeToFile() const{
    std::ofstream ofile;
    std::string preName = "press";
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


void Press::initFromFile(std::filesystem::path ph){
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
