//
//  lab4_task2.cpp
//  
//

//
//

#include "lab4_task2.hpp"
#include <iostream>
#include <string>
using namespace std;

int main () {
    double max, min, temp, average, sum, count;
    string name;
    
    cin >> name;
    
    cin >> temp;
    max = temp;
    min = temp;
    average = 0;
    sum = 0;
    count = 0;
    
    while (temp != -999) {
        
        count = count + 1;
        sum = sum + temp;
        if (temp > max)
            max = temp;
        
        
        if (temp < min){
            min = temp;
        }
         cin >> temp;

    }

    average = sum/count;
    cout << "Name: " << name << endl;
    cout << "Average: " << average << endl;
    cout << "Max: " << max << " " << "Min: " << min << endl;






return 0;

}
