//
//  lab6_task2.cpp
//  
//
//  Created by Brian Neville on 22/02/2017.
//
//

#include <stdio.h>
#include <iostream>
using namespace std;

bool prime(double test_num);

bool isAFactor(int i, int n);

int main(){
    int highnum;
    cout << "the primes between 1 and your chosen number are:" << endl;
    cin >> highnum;
    cout << "2" << endl;
    int test_num = 2;
    
    for(test_num; test_num <= highnum; test_num++){
        prime(test_num);
    }
    
    
    
    return 0;
    
}

bool prime(double test_num){
    int p;
    bool numisprime = true;
    
    for(p =2; p<test_num; p++){
        
        if(isAFactor(p, test_num)==true)
            numisprime = false;
        
      if((numisprime == true) && (p== test_num-1))
          cout << test_num << endl;
        
    }


}

bool isAFactor(int i, int n){
    return(n%i == 0);
    
}

