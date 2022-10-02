/*
Given an integer, check whether it is a palindrome or not.

Input: n = 55555
Output: Yes
*/
//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string is_palindrome(int n) {
            string s = to_string(n);
            bool flag = false;
            for (int i = 0, j = s.size()-1; i < j; ++i, --j) {
                if (s[i] != s[j]) {
                    flag = true;
                    break;
                }
            }
            if (flag == true) return "No";
            return "Yes";
		}
};

int main() {
    int T;
    cin>>T;
    while(T--) {
    	int n;
    	cin>>n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout<<ans<<endl;
    }
	return 0;
}