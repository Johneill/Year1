//
//  lab5_task3.cpp
//  
//
//  Created by David Neill on 2/15/17.
//
//

#include "lab5_task3.hpp"
#include <iostream>
using namespace std;

int main() {
    int first, second, current, amount, count;
    
    cout << "0" << endl;
    
    first = 1;
    second = 0;
    count = 0;
    while (amount > 1){
        
        current = first + second;
        cout << current << endl;
        //store the previous number in second and the difference between the previous number and the number two numbers back in first
        second = current;
        first = current - first;
        
        //counts the amount of numbers generated
        
        
        if(first + second < 0)
            amount = 0;
      
        amount = amount -1;
        count = count +1;
        
    }
    cout << count +1 << " numbers were generated before it broke" << endl;
    return 0;
}