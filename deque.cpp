#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);    // {1}
    dq.emplace_back(4); //{1,4}

    dq.push_front(5);     //{5,1,4}
    dq.emplace_front(11); //{11,5,1,4}
    dq.pop_back();        //{11,5,1}
    dq.pop_front();       //{5,1}

    // REST OPERATIONS SAME TO VECTOR

    for (auto it : dq)
    {
        cout << it << " ";
    }

    return 0;
}