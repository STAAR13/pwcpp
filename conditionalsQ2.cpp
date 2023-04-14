/*Write a program to print absolute value of a number entered by the user.*/


#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number : ";
    cin>>num;
    
    if (num<0)
    {
        num=num*(-1);
        cout<<num<<endl;
    }
    
    else
    {
        cout<<num<<endl;
    }
    return 0;
}