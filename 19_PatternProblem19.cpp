/*
n = 5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin>>n;
    
    // for first-half
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= 2*n; ++j) {
            if (j >= n+2-i && j <= i+n-1) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }

    // for second-half
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= 2*n; ++j) {
            if (j >= i+1 && j <= 2*n-i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}