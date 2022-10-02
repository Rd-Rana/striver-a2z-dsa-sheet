/*
Given a 32 bit number X, reverse its binary form and print the answer in decimal.

Input:
X = 1
Output:
2147483648 
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long reversedBits(long long X) {
        // Store the binary form of X in a vector
        vector<bool> v(32);
        long long temp = X, num = 0;
        int i = 0;
        // int j = 31;
        while (temp > 0) {
            if (temp >= (long long)pow(2, 31-i)) {
                v[i] = 1;
                temp = temp % (long long)pow(2, 31-i);
            }
            // if (temp >= (long long)pow(2, 31-j)) {
            //     v[j] = 1;
            //     temp = temp % (long long)pow(2, 31-j);
            // }
            ++i;
            // --j;
        }

        // Reverse iteration
        for (i = 31; i >= 0; --i) {
            if (v[i] == 1) num += (long long)pow(2, i);
        }
        // cout<<num;
        return num;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        cin>>X;
        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}