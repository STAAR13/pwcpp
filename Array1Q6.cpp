#include<iostream>
using namespace std;
int main()
{
    //int arr[]={1,6,5,7,10,8};
    int arr[]={5,6,2,8,10,9};
    int s=sizeof(arr)/sizeof(arr[0]);
    for (int i=1;i<s;i++)
    {
        int p=0,q=0;
        for (int j=0;j<i;j++)
        {
            if (arr[i]<arr[j])
            {
                p=1;
                break;
            }
        }
        for (int j=i+1;j<s;j++)
        {
            if (arr[i]>arr[j])
            {
                q=1; 
                break;  
            }
        
        }
        if (p==0 &q==0 )
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}