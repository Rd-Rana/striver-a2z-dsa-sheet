/*
n = 5
E
D E
C D E
B C D E
A B C D E
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c = 'A';
    cin>>n;
    c += n-1;
    for (int i = 1; i <= n; ++i, c -= i) {
        for (int j = 1; j <= i; ++j, ++c)
            cout<<c<<" ";
        cout<<endl;
    }
    return 0;
}