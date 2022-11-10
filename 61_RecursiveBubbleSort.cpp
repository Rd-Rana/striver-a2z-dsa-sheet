// Recursive Bubble Sort
#include<bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int arr[], int n) {
    if (n == 0 || n == 1) {
        return;
    }

    // Finding the largest element from arr[0] to arr[n-1]
    int maximum = arr[0], maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maximum) {
            maximum = arr[i];
            maxIndex = i;
        }
    }

    // Swapping the largest element with the last element
    swap(arr[maxIndex], arr[n-1]);
    recursiveBubbleSort(arr, n-1);
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
    int t, n, *arr;
    cin>>t;
    while (t--) {
        cin>>n;
        arr = new int[n];
        for (int i = 0; i < n; ++i) cin>>arr[i];
        recursiveBubbleSort(arr, n);
        printArray(arr, n);
        delete[] arr;
    }
    return 0;
}