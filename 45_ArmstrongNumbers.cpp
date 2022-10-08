/*
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371

Input: N = 153
Output: "Yes"
Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. Hence answer is "Yes".
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string armstrongNumber(int n) {
        int temp = n, res = 0;
        while (temp > 0) {
            res += (int)pow((temp % 10), 3);
            temp /= 10;
        }
        return (res == n) ? "Yes" : "No";
    }
};

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.armstrongNumber(n)<<endl;
    }
    return 0;
}