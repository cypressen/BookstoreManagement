#include "BookSet.h"
#include "BookLib.h"
#include "Inventory.h"
#include "Purchasing.h"
#include "Member.h"
#include "Intention.h"
#include "Sale.h"
#include <iostream>

#include <filesystem>

/*
    Inventory
    Intention
    Purchasing
    Sale
*/

int main(int argc, char const *argv[])
{
    Book A("A", "pressA", 10);
    Book B("B", "pressB", 20);
    Book C("C", "pressC", 15);
    Book D("D", "pressD", 20);

    // std::string str = A.toFileStr();
    // Book E;
    // std::stringstream ss(str);
    // std::vector<std::string> vec1;
    // std::string temp;
    // while(std::getline(ss,temp,'#')){
    //     if(temp.empty()){
    //         continue;
    //     }
    //     vec1.push_back(temp);
    // }

    // E.initFromFileStr(vec1);
    // BookSet bs;
    // bs.addBook(A);
    // bs.addBook(B);
    // bs.addBook(C);

    // bs.toFile();
    Inventory inven;
    inven.addBook(A, 100);
    inven.addBook(B, 100);
    inven.addBook(C, 100);
    inven.addBook(D, 100);

    // inven.writeToFile();

    // Inventory invenCopy;
    // invenCopy.getFromFile(invenCopy.path / "inven1.csv");
    // std::cout<<invenCopy.toString();
    BookLib lib;
    lib.addBook(A, 20); // 200
    lib.addBook(B, 30); // 600
    lib.addBook(C, 20); // 150
    lib.addBook(D, 10); // 0

    // BookLib testLib;

    // std::string str = lib.toFileStr();

    // std::stringstream ss(str);
    // std::vector<std::string> vec1;
    // std::string temp;
    // while(std::getline(ss,temp,'#')){
    //     if(temp.empty()){
    //         continue;
    //     }
    //     vec1.push_back(temp);
    // }

    // testLib.initFromFileStr(vec1);

    // std::cout << lib.toString() <<'\n' <<testLib.toString();
    Sale s(inven);
    // s.normalBuy("xiaoming", lib);

    // IndividualMem inMem("Wang", 2, 100);
    // CorporateMem corMem("YuzuSoft", 3, 1000);
    // CorporateMem corMem2("SB", 3, 1000);

    // s.indMemBuy(inMem, lib, 500);
    // s.corMemBuy(corMem, lib, 500);
    // s.corMemBuy(corMem2,lib,100);
    // std::cout << s.toString() + '\n';
    // std::cout << inven.toString();

    s.initFromFile(s.path/"sale1");
    std::cout<<s.toString();
    s.writeToFile();
    // lib.toFile();

    // lib.addBook(A, 20);
    // lib.removeBook(C, 20);

    // lib.toFile();
    // Inventory inven1;
    // inven1.addBook(A,10);
    // inven1.addBook(A,10);
    // inven1.addBook(A,10);
    // inven1.addBook(B,10);
    // // inven1.toFile();
    // Purchasing p1;
    // p1.initFromFile(p1.path / "purchasing0");
    // std::cout<<p1.toString();
    // IndividualMem m1("Li", 2, 30);
    // CorporateMem m2("Wang", 1, 5);
    // CorporateMem m3("Xi");
    // m1.getLackedLib()->addBook(A, 10);
    // m1.getLackedLib()->addBook(A, 10);
    // m1.getLackedLib()->addBook(A, 10);
    // m1.getLackedLib()->addBook(B, 10);
    // // // std::cout << m1.toString();std::cout<<'\n';
    // // // std::cout << m2.toString();std::cout<<'\n';
    // // // std::cout << m3.toString();std::cout<<'\n';

    // m2.getWonderedLib()->addBook(C,100);

    // m3.getWonderedLib()->addBook(B,20);

    // Intention intent;
    // intent.addIndLack(m1);
    // intent.addCorWonder(m2);
    // intent.addCorWonder(m3);
    // std::cout<<intent.toString()<<std::endl;
    // intent.writeToFile();

    // Intention in1;
    // in1.initFromFile(in1.path / "intention0");
    // std::cout<<in1.toString();
    std::cin.get();
    return 0;
}
