#include <bits/stdc++.h>
using namespace std;


// LIFO
int main(){
    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2.1}
    st.emplace(5);//{5,3,3,2,1}

    cout<<st.top()<<endl;
    st.pop();//{3,3,2,1}
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;

    stack<int>s1,s2;
    s1.push(10);
    s2.push(20);
    cout<<s1.top()<<" "<<s2.top()<<endl;
    s1.swap(s2);
    cout<<s1.top()<<" "<<s2.top()<<endl;
    return 0;
}

// T(n)=O(1) for push, pop, top