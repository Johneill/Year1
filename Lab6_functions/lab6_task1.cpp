//
//  lab6_task1.cpp
//  
//
//  Created by Brian Neville on 22/02/2017.
//
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double gravity_force (double m1, double m2, double d);


int main() {
    double m1, m2, d;
    bool done = false;
    double F;
    char ans, n;
    while(done != true){
    
    cout<< "What this first mass"<<endl;
    cin>>m1 ;
    cout << "What is the second mass"<<endl;
    cin>>m2;
    cout<<"What is the distance between the masses"<<endl;
    cin>> d ;
    
    
    F = gravity_force(m1, m2, d);
    
    
        
    cout << "The Gravtional force is: "<< F << " Newtons" << endl;
        
        cout<< "Run again (y or n):" << endl;
        cin >> ans;
        
        if(ans == 'n')
            done = true;
        
    
    }
    return 0;
}




double gravity_force (double m1, double m2, double d){
    
    const double G= 6.674e-11;
    double F;
    char ans, n;
    
    F= G*m1*m2/(d*d);

    return F;
    
    
}