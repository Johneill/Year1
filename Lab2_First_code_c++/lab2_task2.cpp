//
//  lab2_task2.cpp
//  
//
//  Created by David Neill on 25/01/2017.
//
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
    double centimeters;
    int yards, feet, inches, x;
    cout << "Enter the number of centimeters";
    cin >> centimeters;
    inches = (centimeters/2.54);
    
    yards = inches/36;
    
    inches = inches%36;
    
    feet = inches/12;
    
    inches = inches%12;
    

    
    cout << yards << "  yards, " << feet << "  feet, " << inches << "  inches, " << "/n";
    //cout << (centimeters/2.54)<<"inches";
    
    
    
    
    
    
    
    
    
    
    return 0;
    
};

