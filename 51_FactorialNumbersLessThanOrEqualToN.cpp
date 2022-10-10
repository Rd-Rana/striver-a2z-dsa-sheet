/*
A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120, ... Given a number N, the task is to print all factorial numbers smaller than or equal to N.

Input: N = 3
Output: 1 2
Explanation: The first factorial number is 1 which is less than equal to N. The second number is 2 which is less than equal to N, but the third factorial number is 6 which is greater than N. So we print only 1 and 2.
*/
#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    vector<long long> factorialNumbers(long long N) {
        vector<long long> v;
        long long factNum = 1, i = 1;
        while (factNum <= N) {
            v.push_back(factNum);
            ++i;
            factNum *= i;
        }
        return v;
    }
};

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}