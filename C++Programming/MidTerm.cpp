/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void periodicPayment(double, double, int, int);
void unpaidBalance(double, double, int, int, int);

int main()
{
    char calculatePaymentsValue;
    double loanAmount;
    double interestRatePerYear;
    int numberOfPaymentsPerYear;
    int numberOfYears;
    
    cout <<fixed<<showpoint<<setprecision(2);
    do{
    cout<<"Enter(Y/y) to find the periodic payment and unpaid balance after certain payments: ";
    cin>>calculatePaymentsValue;
    if (calculatePaymentsValue == 'y' || calculatePaymentsValue == 'Y'){
        cout<<"Enter the loan amount: ";
        cin>>loanAmount;
        cout<<"Enter the interest rate per year as a percentage: ";
        cin>>interestRatePerYear;
        cout<<"Enter the number of payments per year: ";
        cin>>numberOfPaymentsPerYear;
        cout<<"Enter the number of years for the loan: ";
        cin>>numberOfYears;
        periodicPayment(loanAmount, interestRatePerYear, numberOfPaymentsPerYear, numberOfYears);
        cout<<endl;

    }
    }
    while(calculatePaymentsValue == 'y' || calculatePaymentsValue == 'Y');
    
    
    
}

void periodicPayment(double loanAmount, double interestRatePerYear, int numberOfPaymentsPerYear, int numberOfYears)
{
    double periodicPaymentIs;
    double interestRatePerYearDecimal;
    double interestRatePerMonth;
    int numberOfPaymentsMade;
    
    interestRatePerYearDecimal = interestRatePerYear / 100;
    interestRatePerMonth = interestRatePerYearDecimal/numberOfPaymentsPerYear;
    

    periodicPaymentIs = (loanAmount*interestRatePerMonth)/(1-(1/pow((1+interestRatePerMonth),(numberOfPaymentsPerYear*numberOfYears))));
    cout<<"The periodic payment is: "<<periodicPaymentIs<<endl;
    
    cout<<"Enter the number of payments made: ";
    cin>>numberOfPaymentsMade;
    
    unpaidBalance(periodicPaymentIs, interestRatePerMonth, numberOfPaymentsPerYear, numberOfYears, numberOfPaymentsMade);
    
}


void unpaidBalance(double periodicPaymentIs, double interestRatePerMonth, int numberOfPaymentsPerYear, int numberOfYears, int numberOfPaymentsMade)
{
    double unpaidBalanceIs;
    unpaidBalanceIs = periodicPaymentIs*(1-(1/pow((1+interestRatePerMonth),(numberOfPaymentsPerYear*numberOfYears)-numberOfPaymentsMade)))/(interestRatePerMonth);
    cout<<"The unpaid balance after "<<numberOfPaymentsMade<<" payments(s) is "<<unpaidBalanceIs;
}
