/*
Count Digits Problem
Given a number N. Count the number of digits in N which evenly divides N.

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly
*/
#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int evenlyDivides(int N) {
        int temp = N, cnt = 0;
        while (temp != 0) {
            if ((temp % 10 != 0) && (N % (temp % 10) == 0)) ++cnt;
            temp /= 10;
        }
        return cnt;
    }
};

int main() { 
    int t, N;
    Solution ob;
    cin>>t;
    while(t--) {
        cin>>N;
        cout<<ob.evenlyDivides(N)<<endl;
    }
    return 0; 
}