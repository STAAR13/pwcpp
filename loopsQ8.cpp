#include<iostream>
using namespace std;
int main()
{
    int x,c,b=1;
    cout<<"please enter no of lines: ";
    cin>>x;

    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=(x-i);j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;)
        {   c=0;
            b++;
            for (int k=2;k<(b/2)+1;k++)
            {   
                if (b%k==0)
                {
                    c=1;
                    break;
                }
        
            }
            if (c==0)
            {
                cout<<b<<" ";
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}