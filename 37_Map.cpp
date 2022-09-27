#include<bits/stdc++.h>
using namespace std;

int main() {
    // key => unique, value => can be duplicate
    // map<int, int> m;
    // m.insert({0,2});
    // m.emplace(1,4);
    // m.insert({2,6});
    // m.insert({3,8});
    // for (int i = 0; i < m.size(); ++i) cout<<m.at(i)<<" ";
    // map stores unique keys in sorted order

    map<int, pair<int, int>> m1;
    m1.insert({1, {2,3}});
    m1.insert({5, {7,9}});
    cout<<m1[1].first<<", "<<m1[1].second<<endl;

    // find(<key>) => will return the memory address of the value associated with the given key
    // lower_bound() & upper_bound() will work
    return 0;
}