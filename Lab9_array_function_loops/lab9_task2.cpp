//
//  lab9_task2.cpp
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

void count (string terms[], string text[],int countwords[], int& loopnumber);
void readToSentinal(string text[]);
void maxpos(string terms[], int countwords[]);
void extractAllterms(string terms[], string text[], int& loopnumber);
bool search(string s, const string a[], int size);

int main(){
    
    int loopnumber;
    
    string terms[arraysize];
    string text[arraysize];
    
    int countwords[arraysize];
    
    
    for (int i = 0; i<arraysize; i++){
        text[i] = "/";
    }

    
    for (int i = 0; i<arraysize; i++){
        terms[i] = "/";
    }

    
    for (int i = 0; i<arraysize; i++){
        countwords[i] = 0;
    }
    
    readToSentinal(text);
    
    extractAllterms(terms, text,loopnumber);
    
    count(terms, text, countwords, loopnumber);
    
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


void count(string terms[], string text[],int countwords[], int& loopnumber){
    
    for (int i = 0; i< loopnumber; i++){
        //cout << loopnumber << "is loopnumber " << endl;
        
        for(int k = 0; k<loopnumber; k++){
            if(terms[i] == text[k])countwords[i]++;
        }
            }
    //start of cout loop
        
    
    for (int c= 0; c < loopnumber; c++){
        if(countwords[c] >=5 ){
        cout << terms[c] << " appears " << countwords[c] << " times" << endl;
        
    }
    }
   //end of cout loop
}

void maxpos(string terms[], int countwords[]){
    int largest_amount = 0;
    int arraypos = 0;
    
    for(int i = 0; i< arraysize; i++){
        if(countwords[i] > largest_amount){
            largest_amount = countwords[i];
            arraypos = i;
        }
    }
    cout << "The most common term is " << terms[arraypos] << " having occured " << largest_amount << " times."<< endl;
}


//fills the terms array with each word that occurs in the text
void extractAllterms(string terms[], string text[], int& loopnumber){
    loopnumber = 0;
    
    for(int p = 0; p <arraysize; p++){
    terms[p] = text[p];
        if (terms[p] != "/")loopnumber++;
    }
    for(int i= 1; i<arraysize; i++)
    {
        for (int k =0; k<arraysize; k++)
            if(search(text[i], text, arraysize) == false){
                terms[i] = text[k];
            }
    }

    
    /*for(int j=0; j<loopnumber; j++){
        cout << terms[j] <<" in j loop" << endl;
    }*/
}


//search function
    bool search(string s, const string a[], int size) {
    for (int i=0; i<size; i++)
    {
        if (a[i] == s)
            return true;
    }
    return false;
}


 
 

