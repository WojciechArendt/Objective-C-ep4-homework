#include <iostream>
#include "przyjaciele.hpp"

using namespace std;

Point::Point(string n, float xx, float yy)
{
    name = n;
    x = xx;
    y = yy;
}

void Point::load()
{
    cout<<"Define x: "; cin>>x;
    cout<<"Define y: "; cin>>y;
    cout<<"Define name of this point: "; cin>>name;
}

Rectangle::Rectangle(string n, float xx, float yy, float ww, float hh)
{
    name = n;
    x = xx;
    y = yy;
    width = ww;
    height = hh;
}

void Rectangle::load()
{
    cout<<"Define x of left down corner: "; cin>>x;
    cout<<"Define y of left down corner: "; cin>>y;
    cout<<"Define width: "; cin>>width;
    cout<<"Define height: "; cin>>height;
    cout<<"Define name of this rectangle: "; cin>>name;
}

void Rectangle::judge(Point &pkt, Rectangle &r) // ampersant, czyli &, pozwoli funkcji pracować na oryginałach zamiast tworzyć kopie obiektów na potrzeby wynowywania poleceń
{
    if ((pkt.x>=r.x)&&(pkt.x<=r.x+r.width)&&(pkt.y>=r.y)&&(pkt.y<=r.y+r.height))
        cout<<endl<<"Point "<<pkt.name<<" is inside: "<<r.name;
    else
        cout<<endl<<"Point "<<pkt.name<<" is outside: "<<r.name;
}
