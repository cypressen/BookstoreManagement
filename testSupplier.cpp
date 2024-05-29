#include "Supplier.h"
#include "Press.h"

int main(int argc, char const *argv[])
{
    Supplier s;
    s.add("B");
    s.add("A");
    s.add("CCC");
    s.add("D");
    
    s.remove("B");
    s.write();

    Press p;
    p.add("A");
    p.add("B");
    p.add("C");
    p.write();


    Press p1;
    p1.init(p1.path / "Press0.csv");
    p1.add("CCCCCCCC");
    p1.write();
    return 0;
}
