#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(2,100);//100 100
    vector<int> copy(3,11);//100 100
    v.insert(v.begin(),copy.begin(),copy.end());
    //11 11 11 100 100

    
    for (auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}