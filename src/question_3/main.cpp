#include <iostream>
#include "question3.h"
//#include "question3.cpp"
using std::string;
using std::cout;
using std::cin;

int main()
{
    char answer;
    double sales;

    cout << "Hello today we will be determining sales commission amounts.\n";
    cout << "If you would like to figure out what a commission amount would be";
    cout << " please enter a y or a Y (for yes) to continue: ";
    cin >> answer;

    do 
    {
        cout << "\nPLease enter you sales: \n";
        cin >> sales;

        cout << "Sales of $" << sales << " yields a commission of $" << get_sales_commission(sales) << ". \n";

        cout << "\nWould you like to go again? (y or Y for yes, else for no): ";
        cin >> answer;
    }

    while (answer == 'y' || "Y");

    return 0;
}