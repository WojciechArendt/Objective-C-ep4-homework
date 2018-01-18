//
//  przyjaciele.hpp
//  05 prostokąt i punkt (funkcje zaprzyjaźnione)
//
//  Created by Dzem on 14/01/2018.
//  Copyright © 2018 Wojciech Arendt. All rights reserved.
//
/*
#ifndef przyjaciele_hpp
#define przyjaciele_hpp

#include <stdio.h>

#endif // przyjaciele_hpp
*/

#include <iostream>

using namespace std;

class Rectangle; //*1 funkce i klasy widzą tylko to co jest powyżej nich i to co jest globalne, dlatego trzeba tą linią poinformować, że istnieje coś takiego jak klasa Rectanle...

class Point
{
    string name;
    float x,y;
    
public:
    Point(string="A", float=0, float=0); //Constructor
    void load();
    
    friend void judge(Point &pkt, Rectangle &r);
};

class Rectangle
{
    string name;
    float x,y,width,height;
    
public:
    Rectangle(string="brak", float=0, float=0, float=1, float=1); //Constructor
    void load();
    
    friend void judge(Point &pkt, Rectangle &r); //*1 ...żeby w tym miejscu klasa Point wiedziała o jej istnieniu
};
