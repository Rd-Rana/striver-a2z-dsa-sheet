/*
Given an Integer N and a list arr. Sort the array using bubble sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}
Output:
1 3 4 7 9
*/
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

class Solution {
public:
    void bubbleSort(int arr[], int n) {
        bool flag;
        for (int i = 0; i < n-1; ++i) {
            flag = false;
            for (int j = 0; j < n-i-1; ++j) {
                if (arr[j] > arr[j+1]) {
                    swap(&arr[j], &arr[j+1]);
                    flag = true;
                }
            }
            if (flag == false)
                break;
        }
    }
};

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.bubbleSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}