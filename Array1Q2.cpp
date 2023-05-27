#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int p=arr[0],q=arr[0];
    for(int i=0;i<n;i++)
    {
        if (p>arr[i])
        {
            p=arr[i];
        }
        if (q<arr[i])
        {
            q=arr[i];
        }
    }
    cout<<p+q<<endl;
    return 0;
}