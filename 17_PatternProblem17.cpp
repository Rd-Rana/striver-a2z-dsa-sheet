/*
n = 4
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        c = 'A';
        for (int j = 1; j <= i+n-1; ++j) {
            if (j <= n-i) cout<<" ";
            else {
                cout<<c;
                c = (j >= n) ? --c : ++c;
            }
        }
        cout<<endl;
    }
    return 0;
}