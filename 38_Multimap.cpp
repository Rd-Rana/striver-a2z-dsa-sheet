#include<bits/stdc++.h>
using namespace std;

int main() {
    // similar to map
    // duplicate keys can be stored (in sorted order only)
    multimap<int, int> m;
    m.insert({1,2});
    // evrything will be same as map
    // m[key] will not work here because key may be there more than once
    return 0;
}