/*
Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.

Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9
*/
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution {
public:
    void merge(int arr[], int l, int m, int r) {
        int n = r-l+1; // size of array
        int i = 0;         // counter for mergedArr[]
        int j = l;         // counter for sortedArr1[]
        int k = m+1;     // counter for sortedArr2[]
        int *mergedArr = new int[n];

        while (j <= m && k <= r) {
            if (arr[j] < arr[k]) {
                mergedArr[i] = arr[j];
                ++i, ++j;
            }
            else {
                mergedArr[i] = arr[k];
                ++i, ++k;
            }
        }

        // if one of the sorted arrays have elements inside it
        while (j <= m) {
            mergedArr[i] = arr[j];
            ++i, ++j;
        }
        while (k <= r) {
            mergedArr[i] = arr[k];
            ++i, ++k;
        }

        for (i = 0, j = l; i < n; ++i, ++j) {
            arr[j] = mergedArr[i];
        }
        delete[] mergedArr;
    }

    void mergeSort(int arr[], int l, int r) {
        if (l >= r)
            return;
        int m = l + (r-l)/2;
        // dividing the array into two equal halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
};

int main() {
    int n, T, i;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        int arr[n + 1];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.mergeSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}