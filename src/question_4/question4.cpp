#include <iostream>
#include "question4.h"
using std::cout;
using std::cin;

double get_fahrenheit(double c)
{
    double f;

    f = ((1.8 /* 9/5 */) * c) + 32;

    return f;

}