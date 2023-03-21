#include<iostream>
using namespace std;

int main(){
    
    cout<<"size of fundamental datatypes :"<<endl;

    char ch;
    cout<<"the size of char is "<<sizeof(ch)<<" bytes"<<endl;
    short int si;
    cout<<"the size of short is "<<sizeof(si)<<" bytes"<<endl;
    
    int a;
    cout<<"the size of int is "<<sizeof(a)<<" bytes"<<endl;

    long int li;
    cout<<"the size of long int is "<<sizeof(li)<<" bytes"<<endl;

    long long int lli;
    cout<<"the size of long long int is "<<sizeof(lli)<<" bytes"<<endl;

    float b;
    cout<<"the size of float is "<<sizeof(b)<<" bytes"<<endl;

    double d;
    cout<<"the size of double is "<<sizeof(d)<<" bytes"<<endl;

    long double ld;
    cout<<"the size of long double is "<<sizeof(ld)<<" bytes"<<endl;

    bool c;
    cout<<"the size of bool is "<<sizeof(c)<<" bytes"<<endl;

    return 0;
}