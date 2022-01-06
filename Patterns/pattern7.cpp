#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < (2 * n); i++)
    {
        int k = n;
        if (i <= n)
        {
            for (int j = 1; j < 2 * n; j++)
            {
                cout << k;
                if (i > j)
                {
                    k=k-1;
                }
                if (i+j>=2*n)
                {   
                    k=k+1;
                }
                
            }
        }
        if (i>n)
        {
            for (int j = 1; j < 2*n; j++)
            {
                cout<<k;
                if (i+j<2*n)
                {
                    k=k-1;
                }
                if (j>=i)
                {
                    k=k+1;
                }
                
                
            }
            
        }
        cout<<endl;
        
    }
}