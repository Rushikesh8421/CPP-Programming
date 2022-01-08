#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    int a[100];
    int b[100];
    cout << "Enter the size of arrays: ";
    cin >> n1;
    cin >> n2;
    int res[n1+n2];
    cout << "Enter array elements of array1: " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "Enter array elements of array2: " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] > b[j])
            {
                res[i] = a[j];
            }
            else
            {
                res[i] = a[i];
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < n1+n2; i++)
    {
        cout<<res[i]<<" ";
    }
    
}