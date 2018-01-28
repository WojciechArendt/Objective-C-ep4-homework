#include <iostream>
#include "przyjaciele.hpp"

using namespace std;


int main()
{
    Point pkt1("A",3,17);
    //pkt1.load();
    
    Rectangle r1("Prostokąt",0,0,6,4);
    //r1.load();
    
    r1.judge(pkt1, r1);
    
    return 0;
}
