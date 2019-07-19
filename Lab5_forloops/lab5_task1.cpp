//
//  lab5_task1.cpp
//  
//
//  Created by David Neill on 2/15/17.
//
//

#include "lab5_task1.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    double y, x, r, interest,total;
    cout<< "Enter your intial investment"<< endl;
    cin >> x;


    cout<< setw(10)<< "rate"<<setw(10)<< "5 years"<< setw(10)<< "10 years"<<setw(10)<< "15 years" <<setw(10)<< "20 years"<< setw(10)<< "25 years" <<setw(10)<< "30 years" << endl;

    for (r=5; r<=10; r=r+0.5){
        cout<< endl <<fixed<<setprecision(2);
        cout<< setw(10)<< r << setw(10);
        
        for (y=5; y<=30; y=y+5){
            interest=pow(1+r/100,y);
            total=x*interest;
            cout<<fixed<<setprecision(2);
            cout<< setw(10)<< total <<setw(10);
        }}
    cout << " " << endl;
    return 0;
    }