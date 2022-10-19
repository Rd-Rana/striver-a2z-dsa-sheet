#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

class Solution {
public:
    // int select(int arr[], int i)
    // {
    //     // code here such that selectionSort() sorts arr[]
    //     int minIndex = i;
    //     int n = sizeof(arr) / sizeof(arr[0]);
    //     for (int j = i + 1; j < n; ++j)
    //     {
    //         if (arr[j] < arr[minIndex])
    //             minIndex = j;
    //     }
    //     return minIndex;
    // }

    void selectionSort(int arr[], int n) {
        int minIndex, i, j;
        for (i = 0; i < n - 1; ++i) {
            minIndex = i;
            for (j = i + 1; j < n; ++j) {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            if (minIndex != i)
                swap(&arr[i], &arr[minIndex]);
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
        ob.selectionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}