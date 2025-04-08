#include <iostream>
#include <climits>
using namespace std;

// Function to find the maximum element in the array
int getMax(int arr[], int n) {
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
        maxVal = max(maxVal, arr[i]);
    return maxVal;
}

// Function to find the sum of elements in the array
int getSum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

// Function to find the required number of painters for a given max length
int numberOfPainters(int arr[], int n, int maxLen) {
    int total = 0, numPainters = 1;
    for (int i = 0; i < n; i++) {
        total += arr[i];
        if (total > maxLen) { // Allocate to new painter
            numPainters++;
            total = arr[i];
        }
    }
    return numPainters;
}

// Function to find the minimum time required to paint all boards
int partition(int arr[], int n, int k) {
    int s = getMax(arr, n);  // Minimum possible time
    int e = getSum(arr, n);  // Maximum possible time

    while (s < e) {
        int mid = s + (e - s) / 2;
        int requiredPainters = numberOfPainters(arr, n, mid);

        // If painters required is within the allowed limit, try for a better (lower) solution
        if (requiredPainters <= k)
            e = mid;
        else
            s = mid + 1;
    }

    return s; // Minimum time required to paint all boards
}

// Driver function
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "Minimum time required: " << partition(arr, n, k) << endl;
    return 0;
}
