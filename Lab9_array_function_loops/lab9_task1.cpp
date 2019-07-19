//
//  lab9_task1.cpp
//  
//
//  Created by David Neill on 3/22/17.
//
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

const int arraysize = 1000;

void count (string terms[], string text[],int countwords[]);
void readToSentinal(string text[]);
void maxpos(string terms[], int countwords[]);

int main(){
    
    string terms[10];
    terms[0] = "array";
    terms[1] = "compute";
    terms[2] = "declare";
    terms[3] = "define";
    terms[4] = "for";
    terms[5] = "function";
    terms[6] = "if";
    terms[7] = "loop";
    terms[8] = "variable";
    terms[9] = "while";
    
    string text[arraysize];
    int countwords[10];
    
    for (int i = 0; i<10; i++){
        countwords[i] = 0;
    }
    
    readToSentinal(text);
    
    count(terms, text, countwords);
    
    maxpos(terms, countwords);
    
    return 0;
}

void readToSentinal(string text[]){
    
    int loopcounter = 0;
    string x;
    cin >> x;
    
    while ((x!= "XXX") && (loopcounter < arraysize)){
        
        text[loopcounter] = x;
        
        cin >>x;
        loopcounter++;
    }
    
}


void count(string terms[], string text[],int countwords[]){
    
    for (int i = 0; i< 10; i++){
        
        for(int k = 0; k<arraysize; k++){
            if(terms[i] == text[k])countwords[i]++;
        }
        
        cout << terms[i] << " appears " << countwords[i] << " times" << endl;
    }
    
}

void maxpos(string terms[], int countwords[]){
    int largest_amount = 0;
    int arraypos = 0;
    
    for(int i = 0; i< 10; i++){
        if(countwords[i] > largest_amount){
            largest_amount = countwords[i];
            arraypos = i;
        }
    }
    cout << "The most common term is " << terms[arraypos] << " having occured " << largest_amount << " times."<< endl;
}



