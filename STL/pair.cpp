#include<bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = make_pair(41,3);
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int> > p2 = make_pair(23, make_pair(4, 5));
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int, int> arr[] = {make_pair(1,2),make_pair(3,4),make_pair(5,6),make_pair(7,8)};
    cout<<arr[1].second<<endl;

}

int main()
{
    explainPair();
    return 0;
}