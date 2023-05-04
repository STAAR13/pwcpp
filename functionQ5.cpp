#include<iostream>
using namespace std;

void prime(int a,int b)
{
    for (int i=a;i<=b;i++)
    {
        int c=0;
        for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                c=1;
                break;
            }
        }
        if (c==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    prime(a,b);
    return 0;
}
   