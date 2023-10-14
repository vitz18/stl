#include<bits/stdc++.h>
using namespace std;

int main(){
    //  key, value
    // Map stores unique keys in sorted order
    map<int,int>m1;
    map<int,pair<int,int>>m2;
    map<pair<int,int>,int>m3;



    map<int,int>mp;
    mp[1]=2;
    mp.insert({2,4});
    mp.emplace(3,6);
    
    m3[{1,2}]=10;


    cout<<mp[1]<<endl;
    cout<<mp[5]<<endl;

    auto it=mp.find(3);

    // cout<<*(it).second<<endl;


    cout<<"\nPrinting map\n";
for(auto k:mp){
    cout<<k.first<<" "<<k.second<<endl;
}

    return 0;
}

/*

multi_map
->duplicate key allowed
->sorted

*/

/*

unordered_map
->duplicate key NOT allowed
->NOT sorted
-> O(1)

*/