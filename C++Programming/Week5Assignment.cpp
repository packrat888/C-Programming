/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double centerXPoint;
double centerYPoint;
double circleXPoint;
double circleYPoint;

double radius(double, double, double, double);
double circumference(double);
void diameter();
double area(double);
int main()
{
    cout <<fixed<<showpoint<<setprecision(2);
    double pi = 2 * acos(0.0);
    cout<<"Enter the x and y coordinates of the center of the circle: ";
    cin>>centerXPoint;cin>>centerYPoint;
    cout<<"Enter the x and y coordinates of a point on the circle: ";
    cin>>circleXPoint;cin>>circleYPoint;
    cout<<"Radius ="<<setw(16)<<radius(centerXPoint, centerYPoint, circleXPoint, circleYPoint)<<endl;
    diameter();
    cout<<"Circumference ="<<setw(10)<<circumference(pi)<<endl;
    cout<<"Area ="<<setw(19)<<area(pi)<<endl;
}
double radius(double centerXPoint, double centerYPoint, double circleXPoint, double circleYPoint)
{
    double radiusBetweenTwoPoints;
    radiusBetweenTwoPoints = sqrt((pow(circleXPoint-centerXPoint, 2))+(pow(circleYPoint-centerYPoint, 2)));
    return radiusBetweenTwoPoints;
}
void diameter()
{
    double diameter;
    diameter = 2*radius(centerXPoint, centerYPoint, circleXPoint, circleYPoint);
    cout<<"Diameter ="<<setw(14)<<diameter<<endl;
}
double circumference(double pi)
{
    double circum;
    circum = 2*pi*radius(centerXPoint, centerYPoint, circleXPoint, circleYPoint);
    return circum;
}
double area(double pi)
{
    double areaOfCircle;
    areaOfCircle = pi*(pow(radius(centerXPoint, centerYPoint, circleXPoint, circleYPoint), 2));
    return areaOfCircle;
}







