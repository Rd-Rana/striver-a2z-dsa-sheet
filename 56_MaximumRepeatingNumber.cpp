/*
Given an array Arr of size N, the array contains numbers in range from 0 to K-1 where K is a positive integer and K <= N. Find the maximum repeating number in this array. If there are two or more maximum repeating numbers return the element having least value.

Input:
N = 4, K = 3
Arr[] = {2, 2, 1, 2}
Output: 2
Explanation: 2 is the most frequent element.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    int i, maxi = INT_MIN, res;
	    unordered_map<int, int> mp;
	    for (i = 0; i < n; ++i) ++mp[arr[i]];
	    for (i = 0; i < k; ++i) {
	        if ((mp.find(i) != mp.end()) && (mp[i] > maxi)) {
	            maxi = mp[i];
	            res = i;
	        }
	    }
	    return res;
	}
};

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout<<ans<<endl;
    }
    return 0;
}