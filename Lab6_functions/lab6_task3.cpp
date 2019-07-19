//
//  lab6_task3.cpp
//  
//
//
//

#include "lab6_task3.hpp"
#include <iostream>
#include <cmath>

using namespace std;

double triangleType(double x1,double y1,double x2,double y2,double x3,double y3);
double distance( double x1,double y1,double x2,double y2);
bool veryClose(double x, double y);

int main(){
    
    int sidescount = 0;
    double x1, x2, x3, y1, y2, y3;
    
    cout << "enter the coordinates of the first vertex" << endl;
    cin >> x1 >> y1;
    cout << "enter the coordinates of the second vertex" << endl;
    cin >> x2 >> y2;
    cout << "enter the coordinates of the third vertex" << endl;
    cin >> x3 >> y3;
    
    sidescount = triangleType (x1, y1, x2, y2, x3, y3);
    if(sidescount == 1) cout << "This is a scalene triangle" << endl;
    if(sidescount == 2) cout << "This is an isosceles triangle" << endl;
    if(sidescount == 3) cout << "This is an equilateral triangle" << endl;
    
    return 0;
}

double triangleType(double x1,double y1,double x2,double y2,double x3,double y3){
    
    int counter = 1;
    double dist1, dist2, dist3;
    
    dist1 = distance(x1, y1, x2, y2);
    dist2 = distance(x1, y1, x3, y3);
    dist3 = distance(x3, y3, x2, y2);

    if(veryClose(dist1,dist2)&& veryClose(dist2,dist3)) return 3;
    if(veryClose(dist1, dist2) == true) counter++;
    if(veryClose(dist1, dist3) == true) counter++;
    if(veryClose(dist3, dist2) == true) counter++;
    
    return counter;
}



double distance( double x1,double y1,double x2,double y2){
    
    return (sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));
    
}



bool veryClose(double x, double y){
    return(fabs(x-y) < 0.0001);
    
}
