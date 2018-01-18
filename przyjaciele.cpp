//
//  przyjaciele.cpp
//  05 prostokąt i punkt (funkcje zaprzyjaźnione)
//
//  Created by Dzem on 14/01/2018.
//  Copyright © 2018 Wojciech Arendt. All rights reserved.
//

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
