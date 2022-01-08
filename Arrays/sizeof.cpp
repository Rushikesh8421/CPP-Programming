#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;
    cout << "Enter array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "The original array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cout << a[i] << endl;
            }
        }
    }
}