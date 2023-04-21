#include<iostream>
using namespace std;
int main()
{
    int a,ans=1;
    cout<<"enter a number : ";
    cin>>a;

    for (int i=a;i>=1;i--)
    {
        ans=ans*i;
    } 

    cout<<"your answer is "<<ans<<endl;
    return 0;
}