#include "Intention.h"
#include "Member.h"
#include "BookLib.h"
int main(int argc, char const *argv[])
{
    Intention it;
    IndividualMem mem("xiaoming");
    BookLib bl;
    Book A("A","PA",20);
    Book B("B","PB",10);
    Book C("C","PC",50);
    bl.addBook(A,1);
    bl.addBook(B,2);
    bl.addBook(C,3);
    
    CorporateMem memCor("XXX");
    // it.addCorWonder(memCor,bl);

    // it.addIndLack(mem,bl);
    // it.write();
    it.init(it.path / "intention2");
    it.addIndLack(mem,bl);
    it.write();
    std::cin.get();
    return 0;
}