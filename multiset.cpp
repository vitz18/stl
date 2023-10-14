#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    // ms.erase(1);
    // ms.erase() will erase all 1

    ms.erase(ms.find(1));
    //1st 1 will be deleted
    for(auto it:ms){
        cout<<it<<" ";
    }
    return 0;
}


/*
    unordered_set<int>us;

    it stores unique but not in sorted order rather randomised order
    T(N)=O(1)
    rest all same

*/