/*
Print numbers from N to 1 (space separated) without the help of loops.

Input:
N = 10
Output: 10 9 8 7 6 5 4 3 2 1
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printNos(int N) {
        if (N == 1) {
            cout<<N<<" ";
            return;
        }
        cout<<N<<" ";
        printNos(N-1);
    }
};

int main() {
    int T;
    // taking testcases
    cin>>T;
    while (T--) {
        int N;
        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout<<endl;
    }
    return 0;
}