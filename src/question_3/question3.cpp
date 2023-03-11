#include "question3.h"
#include <iostream>
using std::cout;
using std::cin;


double get_sales_commission(double sales)
{
    double commission;

    if (sales > 0.0 && sales < 500.0)
        commission = sales * 0.05;

    else if (sales >= 500.0 && sales < 1000.0)
        commission = sales * 0.06;
    
    else if (sales >= 1000.0 && sales < 1500.0)
        commission = sales * 0.07;
    
    else if (sales >= 1500.0)
        commission = sales * 0.08;

    else
        cout << "ERROR - please enter a value higher than 0";

    return commission;

}