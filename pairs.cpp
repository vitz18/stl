#include <bits/stdc++.h>
using namespace std;

/*
Syntax 
pair<datatype1,datatype2>pair_name={val1,val2};
*/

int main()
{
    pair<int, int> p={1,2};
    
    cout<<p.first<<endl;//1
    cout<<p.second<<endl;//2

    pair<int,char>q={1,'a'};
    cout<<q.second<<endl;//a

    pair<int,pair<int,int>>r={11,{22,33}};
    cout<<r.first<<endl;//11
    cout<<r.second.second<<endl;//33

    pair<int,int>arr[]={{3,4},{5,6},{8,9}};
    cout<<arr[2].first;//8



    return 0;
}