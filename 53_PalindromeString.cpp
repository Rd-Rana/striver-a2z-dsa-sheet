/*
Given a string S, check if it is palindrome or not.

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
*/ 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int isPalindrome(string S) {
	    static int i = 0, j = S.size()-1;
	    if (j <= i)
	        return 1;
	    if (S[i] != S[j])
	        return 0;
	    ++i;
	    --j;
	    return isPalindrome(S);
	}
};

int main() {
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin>>t;
   	while(t--) {
   		string s;
   		cin>>s;
   	    Solution ob;
   		cout << ob.isPalindrome(s) << "\n";
   	}
    return 0;
}