#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[]={2,0,3,4};
    for (int j=0;j<=n;j++)
    {
        int p=0;
        for (int i=0;i<n;i++)
        {
            if (arr[i]==j)
            {
                p=1;
                
            }
            
        }
        if (p==0)
        {
            cout<<j<<" ";
        }
    }
    return 0;
}