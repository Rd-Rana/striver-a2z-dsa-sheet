/*
n = 5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, k;
    cin>>n;

    // for first-half
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= i+n-1; ++j) {
            if (j <= n-i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }

    // for second-half
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= (2*n-i); ++j) {
            if (j <= i-1) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}