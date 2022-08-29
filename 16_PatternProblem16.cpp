/*
n = 5
A
BB
CCC
DDDD
EEEEE
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c = 'A';
    cin>>n;
    for (int i = 1; i <= n; ++i, ++c) {
        for (int j = 1; j <= i; ++j)
            cout<<c;
        cout<<endl;
    }
    return 0;
}