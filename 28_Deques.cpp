#include<bits/stdc++.h>
using namespace std;

int main() {
    // Similar to list and vector
    
    /* Creating a deque */
    // deque<int> dq;
    // dq.push_back(1);
    // for (auto i : dq) cout<<i<<" ";
    // cout<<endl;
    // dq.emplace_back(2);
    // for (auto i : dq) cout<<i<<" ";
    // cout<<endl;
    // dq.push_front(3);
    // for (auto i : dq) cout<<i<<" ";
    // cout<<endl;
    // dq.emplace_front(4);
    // for (auto i : dq) cout<<i<<" ";
    // cout<<endl;

    // deque<pair<int, int>> dq;
    // dq.push_back({1, 2});
    // dq.emplace_back(3, 4);
    // for (auto i : dq) cout<<"("<<i.first<<", "<<i.second<<") ";
    // cout<<endl;
    // dq.push_front({5, 6});
    // dq.emplace_front(7, 8);
    // for (auto i : dq) cout<<"("<<i.first<<", "<<i.second<<") ";
    // cout<<endl;

    // deque<int> dq(5);
    // for (auto i : dq) cout<<i<<" ";

    // deque<int> dq(7, 5);
    // cout<<"dq = ";
    // for (auto i : dq) cout<<i<<" ";
    // cout<<endl;
    // deque<int> dq1(dq);
    // cout<<"dq1 = ";
    // for (auto i : dq1) cout<<i<<" ";

    deque<int> dq = {1,2,3,4,5};
    for (auto i : dq) cout<<i<<" ";
    cout<<endl;
    /* Deletion */
    // for (auto i : dq) cout<<i<<" ";
    // cout<<endl;
    // dq.erase(dq.begin(), dq.begin()+3);
    // for (auto i : dq) cout<<i<<" ";

    /* Insertion */
    // dq.insert(dq.begin(), 3, 15);
    // for (auto i : dq) cout<<i<<" ";

    // swap(), clear(), empty()

    cout<<dq.back()<<endl; // returns last element
    cout<<dq.front()<<endl; // returns first element
    return 0;
}