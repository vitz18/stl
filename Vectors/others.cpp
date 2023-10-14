#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5, 10); // 10 10 10 10 10
    cout << v.size() << endl;
    v.pop_back();//[10]

    vector<int> v1 = {1, 2};
    vector<int> v2 = {3, 4};
    v1.swap(v2);
    //v1--> 3 4
    //v2--> 1 2

    v.clear();//erase entire vector
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}