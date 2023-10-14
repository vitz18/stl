#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(2,100);//100 100
    v.insert(v.begin(),11);// 11 100 100

    v.insert(v.begin()+1,3,22);//11 22 22 22 100 100

    for (auto it:v)
    {
        cout<<it<<" ";
    }
    


    return 0;
}