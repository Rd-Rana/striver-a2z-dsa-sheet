/*
Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Input:
N = 5
Output: 1 1 2 3 5
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) {
        vector<long long> v;
        long long a = 0, b = 1, c;
        if (n >= 1) v.push_back(b); // {1}
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            v.push_back(c);
            a = b;
            b = c;
        }
        return v;
    }
};

int main() {
     //taking total testcases
    int t;
    cin>>t;
    while(t--) {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}