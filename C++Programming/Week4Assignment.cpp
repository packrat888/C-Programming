/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double loanAmount;
    double interestRatePerMonth;
    double monthlyPayment;
    double monthlyInterestDecimal;
    double firstMonthsInterest;
    double loanAmountAfterFirstPayment;
    double principalAmountFirstMonth;
    int monthsToPayLoan;
    double interestRatePerYear;
    double amountPaid;
    double monthsInterest;
    
    
    cout <<fixed<<showpoint<<setprecision(2);
    cout<<"Enter the loan amount: ";
    cin>>loanAmount;
    
    cout<<"Enter the interest rate per year: ";
    cin>>interestRatePerYear;
    
    interestRatePerMonth = interestRatePerYear/12;
    
    cout<<"The interest rate per month is "<<interestRatePerMonth<<"%"<<endl;;
    
    cout<<"Enter the monthly payment: ";
    cin>>monthlyPayment;
    
    monthlyInterestDecimal = interestRatePerMonth/100;
    
    firstMonthsInterest = monthlyInterestDecimal*loanAmount;
    
    principalAmountFirstMonth = monthlyPayment - firstMonthsInterest;
    
    loanAmountAfterFirstPayment = loanAmount - principalAmountFirstMonth;
    
    
    
    if(monthlyPayment>firstMonthsInterest)
    {
        cout<<"The first month's interest on $"<<loanAmount<<" is "<<firstMonthsInterest<<endl;
         
         while(loanAmount>0){
            monthsInterest = loanAmount * monthlyInterestDecimal;
            amountPaid = monthlyPayment - monthsInterest;
            loanAmount = loanAmount - amountPaid;
            monthsToPayLoan++;
            
         }
         
         cout<<"The payment toward the principal amount in the first month is $"<<principalAmountFirstMonth<<endl;
         cout<<"After making the first payment, the loan amount is: "<<loanAmountAfterFirstPayment<<endl;
         cout<<"It will take "<<monthsToPayLoan<<" months to repay the loan."<<endl;
       
    }
    else
    {
        cout<<"Monthly payment is too low. The loan cannot be repaid."<<endl;
    }
    
}

