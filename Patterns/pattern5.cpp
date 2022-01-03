#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int sp = 1; sp <= (2*n)-(2*i); sp++)
        {
            cout<<" ";
        }

        int num=i;
        for (int k = 1; k <=i ; k++)
        {
            cout<< num;
            num--;
        }
        
        cout << endl;
    }
}