#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x;
    cout<<"enter a +ve integer: ";  //10
    cin>>a;
    for (int i=2;i<=(a/2)+1;i++)    // 2 to 6
    {
        c=0;
        for (int j=2;j<i;j++)       // 2 to i-1
        {
            if (i%j==0)
            {
                c=1;
                break;
            }
        }
        if (c==0)
        {
            b=i;
            d=a-b;
            x=0;
            if (d==1 || d==0)
            {
                cout<<"enter number greater than 3";
            }
            {
                continue;
            }
            for (int k=2;k<=(d/2)+1;k++)
            {
                if (d%k==0)
                {
                    x=1;
                    break;
                }
            }
            if (x==0)
            {
                cout<<a<<"="<<b<<"+"<<d<<endl;
            }
            
        }
        
    }
    return 0;
}