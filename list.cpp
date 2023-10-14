#include <bits/stdc++.h>
using namespace std;


// for vector SLL is maintained
// for list DLL is maintained
// push front is cheap as compared to vector
int main()
{
    list<int> ls;
   ls.push_back(1); // {1}
   ls.emplace_back(4);//{1,4}
   
   ls.push_front(5);//{5,1,4}
   ls.emplace_front(11);//{11,5,1,4}

    // REST OPERATIONS SAME TO VECTOR


    for (auto it:ls)
    {
        cout<<it<<" ";
    }
    


    return 0;
}