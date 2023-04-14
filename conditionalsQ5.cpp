/*Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.*/

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    cout<<"enter a operator(+,-,*,/) : ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<num1+num2<<endl;
        break;

        case '-':
        cout<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1/num2<<endl;
        break;

        default:
        cout<<"incorrect operator\n";
        break;
    }

    return 0;
}