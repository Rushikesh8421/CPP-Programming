#include <iostream>
using namespace std;

int main()
{

    int n, num=0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n - i; sp++)
        {
            cout << " ";
        }
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}
