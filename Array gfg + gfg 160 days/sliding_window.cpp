#include<iostream>
using namespace std;

int maxksum(int arr[], int k, int n) {
    int curr = 0;
    for (int i = 0; i < k; i++)
        curr += arr[i];

    int res = curr;

    for (int i = k; i < n; i++) {
        curr = curr + arr[i] - arr[i - k];  
        res = max(res, curr);
    }

    return res;
}

int main() {
    int arr[] = {1, 8, 30, -5, 20, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum sum of " << k << " consecutive elements: " << maxksum(arr, k, n);
    return 0;
}
