/*
Given an integer N.Calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + ... till N-th term.

Input:
N = 5
Output:
225
Explanation:
1^3 + 2^3 + 3^3 + 4^3 + 5^3 = 225
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumOfSeries(long long N) {
        if (N == 1)
            return 1;
        return (long long)pow(N, 3) + sumOfSeries(N-1);
        // long long res = (long long)pow((N*(N+1)/2), 2);
        // return res;
    }
};

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.sumOfSeries(N)<<endl;
    }
}