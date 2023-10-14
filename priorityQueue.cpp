#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Also known as max heap
    priority_queue<int> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,8,5,2}
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << "Priority queue with minm element at top\n";
    //Also known as Minimum heap
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(5);     //{5}
    p.push(2);     //{2,5}
    p.push(8);     //{2,5,8}
    p.emplace(10); //{2,5,8,10}
    cout << p.top() << endl;
    return 0;
}