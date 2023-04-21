#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the number of star rows: ";
    cin>>a;
    cout<<"enter the number of star columns: ";
    cin>>b;
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<=b;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}