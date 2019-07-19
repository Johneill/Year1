//
//  lab8_task1.cpp
//  
//
//  Created by David Neill on 3/15/17.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;
/Users/neillda/Desktop/lab8_task1.cpp
const int array_size=70;

int main () {

    
    int array_ycoord[array_size];
    int array_xcoord[array_size];
    bool array_fillxcoord[array_size];
    //cout << "Enter the 70 integers" << endl;

    
    for ( int i =0; i<array_size; i++){
        cin >> array_ycoord[i];
    }
    
    for ( int i =0; i<array_size; i++){
        array_xcoord[i]= i;
    }
    for ( int i =0; i<array_size; i++){
        array_fillxcoord[i]=false;
    }
    
    for (int i = 20; i>0;i--){
        if (i<10)cout << i << "  ";
        if (i>=10)cout << i << " ";
        for (int a =0; a<array_size; a++){
            if(array_ycoord[a]==i){
                for (int k =0; k<=array_xcoord[a]; k++){
                    array_fillxcoord[a]=true;
                    
                }
                
            }
        }
    
            for (int b = 0; b<array_size; b++){
                if (array_fillxcoord[b]==true){
                   cout << "*";
                    
                }
                else cout << " ";
                if (b==array_size-1)
                    cout<<endl;
            }
     
    }
    cout << "--|----+----|----+----|----+----|----+----|----+----|----+----|----+----|"<< endl;

    return 0;
}
