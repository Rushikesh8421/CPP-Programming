#include <iostream>
using namespace std;

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main()
{
    int a, b;
    cout << "Enter the value for a" << endl;
    cin >> a;
    cout << "Enter value of b" << endl;
    cin >> b;

    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum(a, b)<<endl;
    
}

