/*
The task is to complete the insert() function which is used to implement Insertion Sort.

Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9
*/
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution {
public:
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n) {
        int currIndex, i, j;
        for (i = 1; i <= n - 1; ++i) {
            currIndex = i;
            for (j = i - 1; j >= 0; --j) {
                if (arr[j] > arr[currIndex]) {
                    swap(arr[j], arr[currIndex]);
                    currIndex = j;
                }
                else
                    break;
            }
        }
    }
};

int main() {
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.insertionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}