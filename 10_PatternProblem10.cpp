/*
n = 5
*
**
***
****
*****
****
***
**
*
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin>>n;

    // for first-half
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= i; ++j)
            cout<<"*";
        cout<<endl;
    }

    // for second-half
    for (i = 1; i <= n-1; ++i) {
        for (j = 1; j <= n-i; ++j)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}