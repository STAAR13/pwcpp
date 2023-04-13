#include<iostream>
using namespace std;
int main()
{
    int a,first,second,third,fourth,sum;
    cout<<"enter a five digit number : ";
    cin>>a;

    first=a/10000;
    a=a%10000;

    second=a/1000;
    a=a%1000;

    third=a/100;
    a=a%100;

    fourth=a/10;
    a=a%10;

    sum=first+fourth;
    cout<<sum;

    return 0;

}