//
//  lab5_task2.cpp
//  
//
//  Created by David Neill on 2/15/17.
//
//

#include "lab5_task2.hpp"
#include <iostream>
using namespace std;

int main() {
    int first, second, current, amount;
    
    cout << "enter the amount of fibonacci numbers you would like to generate" << endl;
    cin >> amount;
    
    first = 1;
    second = 0;
    
    while (amount > 1){
        
        current = first + second;
        cout << current << endl;
        //store the previous number in second and the difference between the previous number and the number two numbers back in first
        second = current;
        first = current - first;
        
        amount = amount -1;
        
    }
    return 0;
}