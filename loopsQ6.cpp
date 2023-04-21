#include<iostream>
using namespace std;
int main()
{
     for (int i=1;i<=5;i++)
    {
        int c=65;
        for (int j=1;j<=(5-i);j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j++)
        {
            cout<<char(c);
            c++;
        }
        cout<<endl;
    }
    for (int i=4;i>=1;i--)
    {
        int c=65;
        for (int k=5;(k-i)>0;k--)
        {
            cout<<" ";
        }
        for (int j=(2*i-1);j>=1;j--)
        {
            cout<<char(c);
            c++;
        }
        cout<<endl;
    }
    return 0;
}