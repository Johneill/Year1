//
//  lab3_tsak1.cpp
//  
//
//  Created by David Neill on 02/02/2017.
//
//

#include <stdio.h>

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
    
    double hours, hourly_rate, gross_wage, tax, credit, prsi, union_dues, net_pay;
    string name;
    
    
    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> hourly_rate;
    cout << "Name: ";
    cin.ignore(INT_MAX, '\n');
    getline (cin, name);
    
    
    cout << "Name " << name << "\n";
    cout << fixed << setprecision(2) << "Hours " << setw(20) << right << hours <<  "\n";
    cout << fixed << setprecision(2) << "Hourly Rate " << setw(14) << right << hourly_rate <<  "\n";
    gross_wage = hours*hourly_rate;
    cout << fixed << setprecision(2) << "Gross Wage: " << setw(15) << right <<  gross_wage <<  "\n";
    tax = 0.2*gross_wage;
    cout << fixed << setprecision(2) << "Tax @ 20% " << setw(16) << right << tax <<  "\n";
    prsi = .025*gross_wage;
    cout << fixed << setprecision(2) << "PRSI @ 2.5% " << setw(14) << right << prsi << "\n";
    union_dues = 3.50;
    cout << fixed << setprecision(2) << "Union dues " << setw(15) << right << union_dues << "\n";
    net_pay = gross_wage - (tax + prsi + union_dues);
    cout << "------------------------------- \n";
    cout << fixed << setprecision(2) << "Net Pay " << setw(19) << right << net_pay << "\n";
    
    
    return 0;
};
