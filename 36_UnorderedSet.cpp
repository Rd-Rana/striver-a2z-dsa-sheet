#include<bits/stdc++.h>
using namespace std;

int main() {
    // it stores only unique elements in unsorted manner
    unordered_set<int> us = {1,1,1}; // {1}
    for (auto it = us.begin(); it != us.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    us.insert(5);
    us.emplace(9);
    us.insert(4);
    us.insert(2);
    us.insert(10);
    for (auto it = us.begin(); it != us.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;

    // lower_bound() & upper_bound() will not work in unordered set
    // other functions are same as before
    return 0;
}