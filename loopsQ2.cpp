#include<iostream>
using namespace std;
int main()
{

    for (int i=100;i<=500;i++)
    {
        int n=i,a=0,b=0;
        while (n>0)
        {
            a=n%10;
            b=b+(a*a*a);
            n=n/10;
        }
        if (i==b)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}