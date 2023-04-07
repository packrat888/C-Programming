/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double numOfCopies;
    double netPrice;
    double royalty1 = 25000.00;
    double royalty2;
    double royalty3;
    
    cout<<"Enter the num of copies sold: "<<endl;
    cin>>numOfCopies;
    cout<<"Enter the net price of one book"<<endl;
    cin>>netPrice;
    
    royalty2 = (netPrice*0.125) * numOfCopies;
    if(numOfCopies <= 4000)
    {
        royalty3 = (netPrice*0.1) * numOfCopies;
    }
    else
    {
        royalty3 = ((netPrice*0.14) * (numOfCopies - 4000))+12000;
    }
    if(royalty3 > royalty2 && royalty3 > royalty1)
    {
        cout<<"Option 3 is the best and the royalty is: "<<royalty3<<endl;
    }
    else if (royalty2 > royalty3 && royalty2 > royalty1)
    {
        cout<<" Option 2 is the best and the royalty is: "<<royalty2<<endl;
    }
    else
    {
        cout<<"Option 1 is the best and the royalty is: "<<royalty1<<endl;
    }
    
    
    cout<<"Royalty option1: "<<royalty1<<endl;
    cout<<"Royalty option2: "<<royalty2<<endl;
    cout<<"Royalty option3: "<<royalty3<<endl;
    
    
}


