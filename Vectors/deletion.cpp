#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60};

    /*
    erase() is used to remove specified element from the container.
    It takes address / iterator 
    It returns an iterator pointing to the new element after the removed elements.

    */
    //v.begin()--> points to address of 1st value [here it's pointing to 10]
    v.erase(v.begin()+2);

    // {10 20 40 50 60}
    /*
    If we want to delete 20,40 so we can give 2 parameter but the 2nd parameter is not included
    */
    v.erase(v.begin()+1,v.begin()+3);//[10 50 60]
    for(auto it:v){
        cout<<it<<" ";
    }

    return 0;
}