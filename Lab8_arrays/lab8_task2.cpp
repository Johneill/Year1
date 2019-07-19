//
//  lab8_task2.cpp
//  
//
//  Created by David Neill on 3/15/17.
//
//

#include <stdio.h>
#include<iostream>
using namespace std;


void read(char input[], int size);
int compareAnswers(char studentAnswers[],char correctAnswers[]);

int main(){
    int studentNumber;
    char inputdata, datatype;
    
    char studentAnswers[20];
    char correctAnswers[20];

        
    read(correctAnswers,20);
        
    
    cin >> studentNumber;
    
    while (studentNumber >=0 ){
    
        read(studentAnswers, 20);
        
        cout << studentNumber << " "<< compareAnswers(studentAnswers, correctAnswers) << endl;
        
        
        cin >> studentNumber;
    }
    
    
}


void read(char input[], int size){
    
    for (int d=0; d<size; d++){
        cin >>input[d];
    }
}



    
    
    

int compareAnswers(char studentAnswers[],char correctAnswers[]){
    int score=0;
    
    for (int i = 0; i< 20; i++){
        if(studentAnswers[i] == correctAnswers[i])score = score +2;
        else if(studentAnswers[i] != 'x')score = score -1;
    }
    
    return score;
}
