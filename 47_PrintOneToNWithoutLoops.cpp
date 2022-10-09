/*
Print numbers from 1 to N without the help of loops.

Input:
N = 10
Output: 1 2 3 4 5 6 7 8 9 10
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printNos(int N) {
        if (N == 1) {
            cout<<N<<" ";
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
    }
};

int main() {
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--) {
        int N;
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout<<endl;
    }
    return 0;
}