#include<iostream>
using namespace std;
int main()
{
    int n,c,a=0;
    cout<<"enter any number: ";
    cin>>n;

    while (n>0)
    {   
        c=n%10;
        n=n/10;
        a=a*10+c;
        
    }
    cout<<a<<endl;
    return 0;
}