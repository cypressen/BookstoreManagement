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
    // make some books
    Book A("book A", "pressA", 29.9);
    Book B("book B", "pressB", 14.9);
    Book C("book C", "pressC", 12.9);
    Book D("book D", "pressD", 13.9);
    Book E("book E", "pressE", 10.9);

    Inventory myInventory;
    myInventory.addBook(A, 1000); // add 1000 "book A" into myInventory
    myInventory.addBook(B, 1000);
    myInventory.addBook(C, 10);
    
    myInventory.writeToFile(); // ->create a file named "inventory0.csv" 

    Inventory myInventoryCopy;
    myInventoryCopy.getFromFile(myInventoryCopy.path / "inventory0.csv");

    myInventoryCopy.writeToFile(); // ->create a dir named "inventory1.csv" 

    std::cout << myInventory.toString() << '\n';
    std::cout << myInventoryCopy.toString() << '\n';


    IndividualMem indMem1("indMem1", 2, 100);
    IndividualMem indMem2("indMem2", 3, 200);
    IndividualMem indMem3("indMem3", 1, 100);

    BookLib forAllIndMem;
    forAllIndMem.addBook(A, 10);
    forAllIndMem.addBook(A, 20);
    forAllIndMem.removeBook(A, 10);
    forAllIndMem.addBook(C, 20);
    forAllIndMem.addBook(D, 10);

    indMem1.setLackList(forAllIndMem);
    indMem2.setLackList(forAllIndMem);
    indMem3.setLackList(forAllIndMem);

    CorporateMem corMem1("company1", 3, 1000);
    BookLib forCorMem1;
    forCorMem1.addBook(A, 950);
    forCorMem1.addBook(D, 100);
    corMem1.setWonderList(forCorMem1);
    Intention inten1;
    inten1.addIndLack(indMem1);
    inten1.addIndLack(indMem2);

    inten1.addCorWonder(corMem1);

    inten1.writeToFile(); // create a dir named "intention0"

    Intention inten1Copy;
    inten1Copy.initFromFile(inten1Copy.path / "intention0");
    inten1Copy.addIndLack(indMem3);
    inten1Copy.writeToFile(); //create a dir named "intention1"


    Purchasing purchase1;
    purchase1.purchaseBook(D, 100);
    purchase1.purchaseBook(E, 100);
    purchase1.returnBook(A, 100);
    purchase1.writeToFile(); //create a dir named "purchasing0"

    Purchasing purchase1Copy;
    purchase1Copy.initFromFile(purchase1Copy.path / "purchasing0");

    BookLib libForSale;
    libForSale.addBook(A, 10);
    libForSale.addBook(B, 100);
    libForSale.addBook(E, 100);

    Sale sl(myInventory);
    sl.normalBuy("CustomerA", libForSale);
    sl.indMemBuy(indMem1, libForSale, 100);
    sl.corMemBuy(corMem1, libForSale, 200);
    sl.writeToFile();
     
    std::cin.get();
    return 0;
}
