#include<iostream>
using namespace std;

void circle(double r)
{   
    cout<<"Area: "<<float(3.14*r*r)<<endl;
    cout<<"Circumference: "<<float(2*3.14*r)<<endl;
}

int main()
{
    double a;
    cout<<"enter radius: ";
    cin>>a;
    circle(a);
    return 0;
}