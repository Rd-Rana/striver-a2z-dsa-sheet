#include<bits/stdc++.h>
using namespace std;

int main() {
    // always store elements in sorted order but same elements can be inserted more than once
    // multiset<int> ms = {1,1,1};
    // for (auto it = ms.begin(); it != ms.end(); ++it) cout<<*(it)<<" ";
    // cout<<endl;

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.emplace(1); // {1,1}
    ms.insert(1); // {1,1,1}

    // ms.erase(1); // all 1's will get removed
    // cout<<"is ms empty? = "<<ms.empty()<<endl;

    // ms.clear(); // will erase whole multiset

    // cout<<ms.count(1)<<endl; // return number of 1's

    // cout<<*(ms.find(1))<<endl;

    // cout<<ms.size()<<endl;

    for (auto it = ms.begin(); it != ms.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    ms.erase(ms.begin(), --ms.end());
    for (auto it = ms.begin(); it != ms.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    return 0;
}