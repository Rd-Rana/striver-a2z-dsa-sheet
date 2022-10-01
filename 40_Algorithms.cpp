#include<bits/stdc++.h>
using namespace std;

int main() {
    // sorting algorithm in ascending order
    int a[] = {1,5,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    // for (int i = 0; i < n; ++i) cout<<a[i]<<" ";
    // cout<<endl;
    // sort(a, a+n);
    // for (int i = 0; i < n; ++i) cout<<a[i]<<" ";
    // cout<<endl;

    // sorting algorithm in descending order
    // sort(a, a+n); // not known!!

    // sorting algorithm in any order
    // sort(a, a+n, comp) // comp => comparator (boolean function)

    // int num = 7;
    // int cnt = __builtin_popcount(num); // returns no. of 1's in binary form of num
    // cout<<cnt<<endl;

    // long long num = 165786578687;
    // int cnt = __builtin_popcountll(num);
    // cout<<cnt<<endl;

    // Permutation of a string
    // string s = "213";
    // do {
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(), s.end())); // next_permutation() will return the next permutation of a string not 
    // all permutations of a string

    // maximum/minimum element
    int maximum = *max_element(a, a+n);
    int minimum = *min_element(a, a+n);
    cout<<maximum<<endl;
    cout<<minimum<<endl;
    return 0;
}