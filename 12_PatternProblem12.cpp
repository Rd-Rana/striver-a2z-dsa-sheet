/*
n = 4
1      1
12    21
123  321
12344321
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, num = 1;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 2*n; ++j) {
            if (j > i && j < (2*n-i+1)) cout<<" ";
            else {
                cout<<num;
                num = (j < i) ? ++num : ((j == i || j == 2*n) ? num : --num);
                // if (j < i) ++num;
                // else if (j == i || j == 2*n);
                // else --num;
            }
        }
        cout<<endl; 
    }
    return 0;
}