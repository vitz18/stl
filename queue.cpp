#include <bits/stdc++.h>
using namespace std;

// FIFO
int main()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{2,1}
    q.push(4); //{4,2,1}

    q.back() += 9;
    cout << q.back() << endl;
    
    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

    return 0;
}