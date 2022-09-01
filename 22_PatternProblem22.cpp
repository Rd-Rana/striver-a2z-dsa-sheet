/*
n = 4
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
#include<bits/stdc++.h>
using namespace std;

int min(int, int);

int main() {
    int n, value;
    cin>>n;
    for (int i = 1; i <= 2*n-1; ++i) {
        for (int j = 1; j <= 2*n-1; ++j) {
            value = n+1 - (min(min(i, 2*n-i), min(j, 2*n-j)));
            cout<<value<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int min(int a, int b) {
    if (a < b) return a;
    return b; 
}