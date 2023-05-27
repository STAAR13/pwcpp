#include<iostream>
using namespace std;
int main()
{
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int n=5,p=a[0],q=a[0];
    for (int i=0;i<n;i++)
    {
        if (p>a[i])
        {
            p=a[i];
        }
        if (q>b[i])
        {
            q=b[i];
        }
    }
    cout<<p+q;
    return 0;
}