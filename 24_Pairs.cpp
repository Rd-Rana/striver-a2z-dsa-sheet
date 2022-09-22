#include<bits/stdc++.h>
using namespace std;

int main() {
    // pair<int, int> p1 = {4,9};
    // cout<<p1.first<<endl; 
    // cout<<p1.second<<endl;

    // pair<int, pair<int,int>> p2 = {1, {2,3}};
    // cout<<p2.first<<endl;
    // cout<<p2.second.first<<endl;
    // cout<<p2.second.second<<endl;

    pair<int, int> arr[] = { {0,2}, {4,6}, {8,10} };
    for (int i = 0; i < 3; ++i) {
        cout<<"("<<arr[i].first<<", "<<arr[i].second<<")"<<endl;
    }
    return 0;
}