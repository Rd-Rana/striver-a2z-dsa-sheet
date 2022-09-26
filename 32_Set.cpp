#include<bits/stdc++.h>
using namespace std;

int main() {
    // Stores everything in a sorted order and store unique values
    set<int> s; // can be initialized like this: set<int> s = {1,2,3,4};
    s.insert(1); // {1}
    for (auto it = s.begin(); it != s.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    s.emplace(2); // {1,2}
    for (auto it = s.begin(); it != s.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    s.insert(4); // {1,2,4}
    for (auto it = s.begin(); it != s.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    s.insert(3); // {1,2,3,4}
    for (auto it = s.begin(); it != s.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    s.insert(2); // {1,2,3,4}
    for (auto it = s.begin(); it != s.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;

    // find() function
    cout<<endl<<*(s.find(3))<<endl;
    s.find(6); // here, 6 is not in set, so it will return an iterator which points to s.end()

    // erase() function
    s.erase(3); // it will remove 3 and maintains the sorted order
    cout<<endl;
    for (auto it = s.begin(); it != s.end(); ++it) cout<<*(it)<<" ";
    cout<<endl;
    // erase(<iterator>) or erase(<iterator-begin>, <iterator-end>) can be used

    // count() function
    cout<<endl<<"is 4 there? = "<<s.count(4)<<endl;
    cout<<"is 3 there? = "<<s.count(3)<<endl;

    // empty(), size(), swap() same as before
    return 0;
}