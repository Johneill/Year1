//
//  lab2_task1.cpp
//  
//
//  Created by David Neill on 25/01/2017.
//
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
    double ppsi, diameter, price, Area;
    double PI=3.14;
    cout<<"Enter diameter of pizza:";
    cin>>diameter;
    double radius=diameter/2;
    cout<<"Enter price of pizza:";
    cin>>price;
    Area= (radius)*(radius)*PI;
    cout<<"Area="<<Area<<"\n";
    ppsi = (price/Area)*100;
    
    cout<<"ppsi="<<ppsi<<" cents per square inch"<<"\n";
    
    
    
    
    return 0;

};
