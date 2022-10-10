/*
Print an array in reverse order using recursion.

Input:
4
1 2 3 4
Output:
4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;

void printRevArr(int arr[], int n) {
    if (n == 0) {
        cout<<arr[0]<<" ";
        return;
    }
    cout<<arr[n]<<" ";
    printRevArr(arr, n-1);
}

int main() {
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    printRevArr(a, n-1);
    return 0;
}