#include <iostream>
#include "przyjaciele.hpp"

using namespace std;

void judge(Point &pkt, Rectangle &r) // ampersant, czyli &, pozwoli funkcji pracować na oryginałach zamiast tworzyć kopie obiektów na potrzeby wynowywania poleceń
{
    if ((pkt.x>=r.x)&&(pkt.x<=r.x+r.width)&&(pkt.y>=r.y)&&(pkt.y<=r.y+r.height))
        cout<<endl<<"Point "<<pkt.name<<" is inside: "<<r.name;
    else
        cout<<endl<<"Point "<<pkt.name<<" is outside: "<<r.name;
}

int main()
{
    Point pkt1("A",3,17);
    //pkt1.load();
    
    Rectangle r1("Prostokąt",0,0,6,4);
    //r1.load();
    
    judge(pkt1, r1);
    
    return 0;
}
