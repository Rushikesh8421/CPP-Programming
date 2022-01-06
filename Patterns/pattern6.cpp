#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int n = (N+1)/2;

    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= i - 1; sp++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int sp = i - 1; sp >= 1; sp--)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}