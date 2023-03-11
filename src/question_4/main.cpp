#include <iostream>
#include "question4.h"
//#include "question4.cpp"
using std::cout;
using std::cin;

int main()
{
    double c;

    cout << "Today we will be converting from Celsius to Fahrenheit.";
    cout << "\nPlease enter the degrees in Celsius: ";
    cin >> c;
    
    cout << c << " degrees in Celsius is " << get_fahrenheit(c) << " degrees in Fahrenheit.\n\n";
    return 0;
}