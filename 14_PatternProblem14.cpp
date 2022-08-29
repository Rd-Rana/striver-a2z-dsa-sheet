/*
n = 5
A
AB
ABC
ABCD
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        c = 'A';
        for (int j = 1; j <= i; ++j, ++c)
            cout<<c;
        cout<<endl;
    }
    return 0;
}