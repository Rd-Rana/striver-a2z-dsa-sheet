/*
Print GFG n times without the loop.

Input:
5
Output:
GFG GFG GFG GFG GFG
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printGfg(int N) {
        if (N == 1) {
            cout<<"GFG ";
            return;
        }
        cout<<"GFG ";
        printGfg(N-1);
    }
};

int main() {
    int T;
    // taking testcases
    cin >> T;

    while (T--) {
        int N;
        // input N
        cin >> N;
        Solution ob;
        // calling printGfg() function
        ob.printGfg(N);
        cout<<endl;
    }
    return 0;
}