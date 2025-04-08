#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= arr[i]; // XOR operation
    }
    return unique;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 8}; // Example array (odd length)
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Unique number: " << findUnique(arr, n) << endl;
    return 0;
}
