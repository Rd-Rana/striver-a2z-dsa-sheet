#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1,4,5,6,9,9};
    int n = sizeof(a)/sizeof(a[0]);
    int ind = lower_bound(a, a+n, 4) - a; // lower_bound() will return an iterator pointing to 4 (first occurrence)
    cout<<ind<<endl;

    ind = lower_bound(a, a+n, 7) - a; // lower_bound() will return an iterator pointing to 9
    // because 7 is not present & immediate greater no. is 9
    cout<<ind<<endl;

    ind = lower_bound(a, a+n, 10) - a; // lower_bound() will return an iterator pointing to memory location after last element
    cout<<ind<<endl;

    // in vectors, begin() & end() functions are used
    return 0;
}