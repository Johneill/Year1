//
//  lab3_task2.cpp
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
    
    double hours, hourly_rate, gross_wage, gross_tax, net_tax, prsi, union_dues, net_pay, overtime_pay, tax_credits;
    string name;
    
    
    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> hourly_rate;
    cout << "Enter tax credits: ";
    cin >> tax_credits;
    cout << "Name: ";
    cin.ignore(INT_MAX, '\n');
    getline (cin, name);
    
    
    
    cout << "Name: " << setw(17) << name << "\n";
    cout << fixed << setprecision(2) << "Hours: " << setw(20) << right << hours <<  "\n";
    cout << fixed << setprecision(2) << "Hourly Rate: " << setw(14) << right << hourly_rate << "\n";
    gross_wage = hours*hourly_rate;
    
    if (hours > 35) {
        overtime_pay = (hours-35)*(hourly_rate*.5);
        gross_wage = gross_wage + overtime_pay;
        cout << "Overtime Pay: " << setw(13) << right << overtime_pay << "\n";
    }
    
    cout << fixed << setprecision(2) << "Gross Wage: " << setw(16) << right <<  gross_wage << "\n";
    gross_tax = (0.2*gross_wage);
    cout << fixed << setprecision(2) << "Gross Tax @ 20%: " << setw(10) << right << gross_tax << "\n";
    net_tax = gross_tax - tax_credits;
    
    if (net_tax < 0) {
        net_tax = 0;
    }
    
    cout << fixed << setprecision(2) << "Net Tax: " << setw(18) << right << net_tax << setw(5) <<  "\n";
    prsi = .025*gross_wage;
    cout << fixed << setprecision(2) << "PRSI @ 2.5%: " << setw(14) << right << prsi << setw(5) << "\n";
    union_dues = 3.50;
    cout << fixed << setprecision(2) << "Union dues: " << setw(15) << right << union_dues << setw(5) << "\n";
    net_pay = gross_wage - (net_tax + prsi + union_dues);
    cout << "-------------------------------- \n";
    cout << fixed << setprecision(2) << "Net Pay: " << setw(19) << right << net_pay << setw(5) << "\n";
    
    
    return 0;
};
