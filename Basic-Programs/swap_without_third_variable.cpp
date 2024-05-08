#include<iostream>
using namespace std;
int main()
{
    cout<<"Swapping without using third variable"<<endl;
    int a = 10, b = 20;
    cout<<"Before Swapping "<<"a is "<<a<<" and b is "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After Swapping "<<"a is "<<a<<" and b is "<<b<<endl;
    return 0;
}