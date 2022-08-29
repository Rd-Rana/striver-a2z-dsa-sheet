/*
n = 5
ABCDE
ABCD
ABC
AB
A
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        c = 'A';
        for (int j = 1; j <= n-i+1; ++j, ++c)
            cout<<c;
        cout<<endl;
    }
    return 0;
}