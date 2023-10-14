#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {11, 22, 33, 44};
    cout << "1st way\n";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n2nd way\n";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n3rd way\n";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << "\n4th way\n";

    for (auto i : v)
    {
        cout << i << " "; // Prints all the values in a single line
    }

    return 0;
}