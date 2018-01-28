#include <iostream>

using namespace std;

class Point;

class Rectangle
{
    string name;
    float x,y,width,height;
    
public:
    Rectangle(string="brak", float=0, float=0, float=1, float=1); //Constructor
    void load();
    
    void judge(Point &pkt, Rectangle &r);
};

class Point
{
    string name;
    float x,y;
    
public:
    Point(string="A", float=0, float=0); //Constructor
    void load();
    
    friend void Rectangle::judge(Point &pkt, Rectangle &r);
};

