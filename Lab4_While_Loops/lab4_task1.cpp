//
//  lab4_task1.cpp
//  
//
//  Created by Lucy Byrne on 08/02/2017.
//
//

#include "lab4_task1.hpp"
#include <iostream>
using namespace std;

int main () {
    double inital, imonth, mpayments, debt, month, cost, interest, totalinterest;
    
    cost = 1500;
    imonth = 0.01;
    month = 0;
    interest = cost * 0.01;
    while (cost>0) {
        interest = cost * 0.01;
         cost = cost - (50 - interest);
    month = month + 1;
        
        totalinterest = totalinterest + interest;
    }
    
    cout << "Number of months taken to pay off stereo: " << month << endl;
    cout << "Total interest paid: " << totalinterest << endl;
    
    
    
    
    
    return 0;
}