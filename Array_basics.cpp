#include <iostream>

using namespace std;

int insert(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int insert_at_pos(int n, int a[], int pos)
{

    int item;

    if (pos < 0 || pos > n)
    {
        cout << "Invalid Position";
        return n;
    }
    else
    {
        cout << "Enter the item to be inserted:" << endl;
        cin >> item;
        for (int i = n - 1; i >= pos; i--)
        {
            a[i + 1] = a[i];
        }

        a[pos] = item;
    }
    return n + 1;
}

int delete_at_pos(int n, int a[], int pos){
    if (pos<0 || pos>n)
    {
        cout<<"Invalid position"<<endl;
        return n;
    }
    else
    {
        int item = a[pos];
        for (int i = pos+1; i < n; i++)
        {
            a[i-1] = a[i];
        }
        cout<<"The deleted item is "<<item<<endl;
        
    }
    return n-1;
    
}

int display(int n, int a[]){
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}


int main()
{
    int n, item, a[10], pos, choice;
    for(;;)
    {
        cout << "...MENU..." << endl;
        cout << "1.Creat\n2.Insert_at_Position\n3.Delete at position\n4.Display\n5.Exit" << endl;
        cout << "Enter the choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the no of array elements to be inserted" << endl;
            cin >> n;
            cout << "Enter the " << n << " elements" << endl;
            insert(n, a);
            break;

        case 2:
            cout << "Enter the position of item to be inserted:" << endl;
            cin >> pos;
            n = insert_at_pos(n, a, pos);
            break;

        case 3:
            cout<<"Enter the position of item that to be deleted:"<<endl;
            cin>>pos;
            n = delete_at_pos(n, a, pos);
            break;
        case 4:
            cout<<"The array elements are:"<<endl;
            display(n, a);
            break;

        case 5:
            exit(0);

        default:
            cout<<"Invalid input";
            break;
        }
    }
}