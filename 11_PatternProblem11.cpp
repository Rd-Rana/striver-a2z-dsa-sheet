/*
n = 5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, bit;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        bit = (i % 2 == 0) ? 0 : 1;
        for (int j = 1; j <= i; ++j) {
            cout<<bit<<" ";
            bit = (bit == 0) ? 1 : 0;
        }
        cout<<endl;
    }
    return 0;
}