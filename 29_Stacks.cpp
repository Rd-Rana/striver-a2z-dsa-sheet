#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Creating a stack */
    // stack<int> st;
    // st.push(1); // {1}
    // st.push(2); // {2,1}
    // st.push(3); // {3,2,1}
    // st.emplace(4); // {4,3,2,1}
    // st.emplace(5); // {5,4,3,2,1}
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // cout<<st.size()<<endl;
    // cout<<st.empty()<<endl; // states whether a stack is empty or not. 1 for empty, 0 for not empty

    /* swap() function */
    stack<int> st1;
    stack<int> st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    cout<<st1.top()<<endl;
    st2.push(4);
    st2.push(5);
    st2.push(6);
    st2.push(7);
    cout<<st2.top()<<endl;
    st1.swap(st2);
    cout<<st1.top()<<endl;
    cout<<st2.top()<<endl;

    // All operations happen in O(1) time
    return 0;
}