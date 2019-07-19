//
//  lab5_task2b.cpp
//  
//
//  Created by David Neill on 2/15/17.
//
//

#include "lab5_task2b.hpp"
#include <iostream>
using namespace std;

int main() {
    int first, second, current, amount, counter;
    
    cout << "Enter the number that you would like the series to have stopped by" << endl;
    cin >> amount;
    cout << 0;
    first = 1;
    second = 0;
    counter = 1;
    while (amount >1){
        
        current = first + second;
        cout << current << endl;
        //store the previous number in second and the difference between the previous number and the number two numbers back in first
        second = current;
        first = current - first;
        
        if(first+second >= amount)
            amount = 0;
        
        amount = amount -1;
        counter = counter +1;
    }
    cout << counter << " fibonacci numbers were generated" << endl;
    return 0;
}