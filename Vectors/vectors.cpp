#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> w(5, 100); // A container containing 5 instances of 100
    cout << w[2] << endl;  // 100

    vector<int> x(5); // A container containing 5 instances of Garbage value
    // It will work even if we try to push 6,7,.. elements

    vector<int> v1(5, 10);
    vector<int> v2(v1); // v1 is copied to v2

    // Iteration
    vector<int> vec1 = {10, 20, 30, 40};
    cout << vec1[2] << endl;     // 30
    cout << vec1.back() << endl; // 40

    vector<int>::iterator it = vec1.begin();
    // "it" is pointing to address of 1st value of vector
    cout << *(it) << endl;     // 10
    cout << *(it + 2) << endl; // 30

    vector<int>::iterator iter = vec1.end();
    // "it" is NOT pointing to THE address of last  value of vector .
    // .end() points to memory location that is right after last element

    // Iterate over vectors
    vector<int> v3 = {11, 22, 33, 44};
    cout << "1st way\n";

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << "\n2nd way\n";
    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n3rd way\n";
    for (auto it = v3.begin(); it != v3.end(); it++)
    {
        cout << *(it) << " ";
    }
    
    cout << "\n4th way\n";

    for (auto i : v3)
    {
        cout << i << " "; // Prints all the values in a single line
    }

    return 0;
}