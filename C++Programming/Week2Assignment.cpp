/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
const double filledCarton = 3.78;
const double cartonCost = 0.38;
const double cartonProfit = 0.27;
int main()
{
    int liters;
    double totalCost;
    double totalProfit;
    int cartons;
    
    cout<<"Enter, in liters, the total quantity of milk produced: "<<endl;
    cin>>liters; 
    
    cartons = liters/filledCarton;
    cout<<"The number of milk cartons needed to hold milk: "<<cartons<<endl;
    
    totalCost = cartonCost * liters;
    cout<<"the cost of producing milk: $"<<totalCost<<endl;
    
    totalProfit = cartonProfit * cartons;
    cout<<"Profit: $"<<totalProfit<<endl;
    

    
}

