#include<iostream>
using namespace std;
int main()
{
    int a,first,second,sum;
    cout<<"enter a three digit number : ";
    cin>>a;

    first=a/100;
    a=a%100;

    second=a/10;
    a=a%10;

    sum=first+second+a;
    cout<<sum;

    return 0;

}