/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/

#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"enter cost price : ";
    cin>>cp;
    cout<<"enter selling price : ";
    cin>>sp;
    if (cp>sp)
    {
        cout<<"loss = "<<cp-sp<<endl;
    }
    else if (sp>cp)
    {
        cout<<"profit = "<<sp-cp<<endl;
    }
    else
    {
        cout<<"no profit no loss"<<endl;
    }
    
    return 0;

}