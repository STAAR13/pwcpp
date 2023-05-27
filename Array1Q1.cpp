#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int a=0,b=0,n=5;

    for (int i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            a++;
        } 
        else{
            b++;
        }  
    }
    cout<<"Odd numbers: "<<b<<endl;
    cout<<"Even numbers: "<<a<<endl;
    return 0;
}