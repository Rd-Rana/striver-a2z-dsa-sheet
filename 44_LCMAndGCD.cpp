/*
Given two numbers A and B. The task is to find out their LCM and GCD.

Input:
A = 5 , B = 10
Output:
10 5
Explanation:
LCM of 5 and 10 is 10, while their GCD is 5.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> v(2);

        // calculation for GCD
        // long long minimum = min(A, B);
        // while (A % minimum != 0 || B % minimum != 0) {
        //     --minimum;
        // }
        // v[1] = minimum;
        v[1] = gcd(A,B);
        
        // calculation for LCM
        v[0] = (A*B)/v[1];
        
        return v;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}