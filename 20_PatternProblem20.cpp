/*
n = 5
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin>>n;

    // for first-half
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= 2*n; ++j) {
            if (j >= i+1 && j <= 2*n-i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }

    // for second-half --> 1st loop will run (n-1) times as per the problem
    for (i = 1; i <= n-1; ++i) {
        for (j = 1; j <= 2*n; ++j) {
            if (j >= n+1-i && j <= i+n) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}