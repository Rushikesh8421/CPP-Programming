#include <iostream>
using namespace std;

int main()
{
    int a[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl
         << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}