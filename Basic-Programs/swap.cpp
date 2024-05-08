#include <iostream>
using namespace std;
int main()
{
    cout << "Swapping program" << endl;
    int a = 10, b = 20, c;
    cout<<"Values before swapping "<<"a="<<a<<" and b="<<b<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"Values after swapping "<<"a="<<a<<" and b="<<b<<endl;
    return 0;

}