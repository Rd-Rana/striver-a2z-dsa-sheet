#include<bits/stdc++.h>
using namespace std;

int main() {
    // Same as vector but it provides front operations as well
    /* Creating a list */
    // list<int> ls;
    // ls.push_back(1);
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;
    // ls.emplace_back(2);
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;
    // ls.push_front(3); // very cheap operation as compared to insertion in vector
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;
    // ls.emplace_front(4);
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;

    // list<pair<int, int>> ls;
    // ls.push_back({1, 2});
    // ls.emplace_back(3, 4);
    // for (auto i : ls) cout<<"("<<i.first<<", "<<i.second<<") ";
    // cout<<endl;
    // ls.push_front({5, 6});
    // ls.emplace_front(7, 8);
    // for (auto i : ls) cout<<"("<<i.first<<", "<<i.second<<") ";
    // cout<<endl;

    // list<int> ls(5);
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;
    
    // list<int> ls(5, 17);
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;

    // Copy whole list in another list
    // list<int> ls1(ls);
    // for (auto i : ls1) cout<<i<<" ";
    // cout<<endl;

    // You are not allowed to access list members like this: ls[2] (for e.g)
    
    // deletion
    list<int> ls = {1,2,3,4,5};
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;
    // ls.erase(ls.begin());
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;

    // end(), rend(), rbegin() same

    // insertion
    // ls.insert(++ls.begin(), 2, 6);
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;

    // ls.insert(ls.end(), ls.begin(), ls.end());
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;

    // swap
    list<int> ls1 = {5,2,6};
    // cout<<"ls = ";
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;
    // cout<<"ls1 = ";
    // for (auto i : ls1) cout<<i<<" ";
    // cout<<endl;
    // ls1.swap(ls);
    //     cout<<"ls = ";
    // for (auto i : ls) cout<<i<<" ";
    // cout<<endl;
    // cout<<"ls1 = ";
    // for (auto i : ls1) cout<<i<<" ";
    // cout<<endl;

    // clearing the list and checking emptiness
    for (auto i : ls) cout<<i<<" ";
    cout<<endl;
    cout<<ls.empty()<<endl;
    ls.clear();
    cout<<ls.empty()<<endl;
    return 0;
}