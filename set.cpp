#include <bits/stdc++.h>
using namespace std;

/*SET
SORTED
Unique
*/
int main()
{
    set<int> s;
    s.insert(1);  //{1}
    s.insert(2);  //{1,2}
    s.insert(2);  //{1,2}
    s.emplace(4); //{1,2,4}
    s.insert(3);  //{1,2,3,4}
    s.insert(5);  //{1,2,3,4,5}

    auto it = s.find(3);
    cout << *it << " " << endl;

    auto its=s.find(6);
    // Since 6 is not there then find() will return iterator to outside set(after set)

    s.erase(3);//delete 3
//[1 2 4 5]
    auto it1=s.find(2);
    auto it2=s.find(5);
    s.erase(it1,it2);//delete 2 and 4 since last is exclusive


    int cnt=s.count(1);
    cout<<cnt<<endl;
    cout << "\nPrinting set\n";
    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}