/*Write a short program that prints each number from 1 to 100 on a new line, except if the number
is a multiple of 5 or 7.*/

#include<iostream>
using namespace std;
int main()
{
    int length,breadth;
    cout<<"enter length : ";
    cin>>length;
    cout<<"enter breadth : ";
    cin>>breadth;
    
    if (length==breadth)
    {
        cout<<"square"<<endl;
    }

    else
    {
        cout<<"rectangle"<<endl;
    }


    return 0;

}