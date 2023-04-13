//to check both the conditions a<50 and a<b
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;

    if (a<50&&a<b)
    {
        cout<<"condition satisfied"<<endl;   
    }
    else
    {
        cout<<"condition not satisfied"<<endl;
    }

    return 0;
}