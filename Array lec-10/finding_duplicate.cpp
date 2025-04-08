#include <iostream>

using namespace std;

// Function to find duplicates in an array
void findDuplicates(int arr[], int n) {
    cout << "Duplicates in the array: ";
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Example usage
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findDuplicates(arr, n);

    return 0;
}