#include<iostream>
using namespace std;

void oddnum(int a,int b)
{
    for (int i=a;i<=b;i++)
    {
        if (i%2==0)
        {
            continue;
        }
        else
        {
            cout<<i<<' ';
        }
    }
}
int main()
{
    int a,b;
    cout<<"enter two numbers to print odd numbers b/w them: ";
    cin>>a>>b;
    oddnum(a,b);
    return 0;
}