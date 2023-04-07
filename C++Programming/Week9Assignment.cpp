/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string packageChoice;
    int numberOfHoursServiceUsed;
    int additionalHoursUsed;
    double totalCharges;
    
    cout<<"Enter the package for the customer(Enter 'A' for Package A, 'B' for Package B, and 'C' for Package C): ";
    cin>>packageChoice;
    cout<<"Enter the number of hours the service was used: ";
    cin>>numberOfHoursServiceUsed;
    if ((packageChoice == "A" || packageChoice == "a") && numberOfHoursServiceUsed>10){
        additionalHoursUsed = numberOfHoursServiceUsed - 10;
        totalCharges=(additionalHoursUsed*2.00)+9.95;
    }else if((packageChoice == "A" || packageChoice == "a") && numberOfHoursServiceUsed<=10){
        totalCharges=9.95;
    }else if((packageChoice == "B" || packageChoice == "b") && numberOfHoursServiceUsed>20){
        additionalHoursUsed = numberOfHoursServiceUsed - 20;
        totalCharges=(additionalHoursUsed*1.00)+13.95;
    }else if((packageChoice == "B" || packageChoice == "b") && numberOfHoursServiceUsed<=20){
        totalCharges=13.95;
    }else if(packageChoice == "C" || packageChoice == "c"){
        totalCharges=19.95;
    }else{
        cout<<"The value entered for package choice or hours of service is invalid.";
    }
    
    cout<<"The total charges for Package "<<packageChoice<<" is $"<<totalCharges<<endl;
    
}


