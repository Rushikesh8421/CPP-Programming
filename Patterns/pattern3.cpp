#include <iostream>
using namespace std;

int main()
{
    int n, num = 0;
    cout << "Enter the no of rows: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n-i; sp++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            num++;
            cout << num;
        }

        for (int k = 1; k < i; k++)
        {
            num--;
            cout << num;
        }

        cout << endl;
    }
}