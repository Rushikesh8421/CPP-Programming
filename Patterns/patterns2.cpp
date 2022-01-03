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
            cout << " " << i;
        }
        cout << endl;
    }

    cout << endl
         << "Another Pattern" << endl
         << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    cout << endl
         << "Another Pattern" << endl
         << endl;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << x++;
        }
        cout << endl;
    }

    cout << endl
         << "Another Pattern" << endl
         << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n-i; sp++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<< i;
        }
        cout << endl;
    }

    cout<<endl<<"New Pattern"<<endl<<endl;

    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n-i; sp++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<< i<<" ";
        }
        cout << endl;
    }

}