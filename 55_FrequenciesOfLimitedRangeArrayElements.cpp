/*
Given an array A[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.
Note: The elements greater than N in the array can be ignored for counting and please read your task section of the problem carefully to understand how to output the array.

Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.
*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

class Solution {
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P) {
        // vector<int> v(arr);
        // int i;
        // for (i = 0; i < N; ++i) arr[i] = 0;
        // for (i = 0; i < N; ++i) {
        //     if (v[i] <= P)
        //         ++arr[v[i]-1];
        // }
        unordered_map<int, int> mp;
        int i;
        // storing the occurrences of the elements of an array in unordered map with key = arr[i]
        for (i = 0; i < N; ++i) {
            if (arr[i] <= P)
                ++mp[arr[i]];
        }
        // finding (and putting) the values (in array) corresponding to key = i+1
        for (i = 0; i < N; ++i) {
            if (mp.find(i+1) != mp.end()) arr[i] = mp[i+1];
            else arr[i] = 0;
        }
    }
};

int main() { 
	long long t;

	//testcases
	cin>>t;
	while(t--) {
	    int N, P;
	    //size of array
	    cin>>N; 
	    
	    vector<int> arr(N);
	
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin>>arr[i]; 
	    }
        cin>>P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout<<arr[i]<<" ";
	    cout<<endl;
	}	
	return 0; 
}