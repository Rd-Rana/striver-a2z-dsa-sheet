/*
Given a positive integer N., The task is to find the value of sum_{i=1 to n} F(i) where function F(i) for the number i be defined as the sum of all divisors of 'i'.

Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15
*/
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    long long sumOfDivisors(int N) {
        // Write Your Code here
        // int i, j;
        // long long res = N;
        // for (i = 2; i <= N; ++i) {
        //     res += i;
        //     for (j = 2; j < i; ++j) {
        //         if (i % j == 0) res += (long long)j;
        //     }
        // }
        long long sum = 0;
        for (int i = 1; i <= N; ++i) {
            sum += floor(N/i)*i;
        }
        return sum;
    }
};

int main() {
    int t;
    cin>>t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}