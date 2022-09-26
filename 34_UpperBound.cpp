#include<bits/stdc++.h>
using namespace std;

int main() {
    // Returns an iterator immediate greater than given key
    vector<int> v = {1,4,5,6,9,9};
    int ind = upper_bound(v.begin(), v.end(), 4) - v.begin();
    cout<<ind<<endl; // 2
    ind = upper_bound(v.begin(), v.end(), 7) - v.begin();
    cout<<ind<<endl; // 4
    ind = upper_bound(v.begin(), v.end(), 10) - v.begin();
    cout<<ind<<endl; // 6
    return 0;
}