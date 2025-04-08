// #include <iostream>
// #include <vector>
// using namespace std;

// void segregateZerosOnes(vector<int>& arr) {
//     int j = 0, i = arr.size() - 1;

//     while (j < i) {
//         while (arr[j] == 0 && j < i) j++;
//         while (arr[i] == 1 && j < i) i--;
//         if (j < i) swap(arr[j++], arr[i--]);
//     }
// }

// int main() {
//     vector<int> arr = {0, 1, 1, 0, 1, 0, 0, 1, 0};
//     segregateZerosOnes(arr);

//     for (int num : arr)
//         cout << num << " ";
    
//     return 0;
// }


//babbar solving 
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {
    int i = 0, j = n - 1;  // Left and right pointers

    while (i < j) {
        while (arr[i] == 0 && i < j) i++;  // Move i forward if it's already 0
        while (arr[j] == 1 && i < j) j--;  // Move j backward if it's already 1

        if (i < j) {
            swap(arr[i], arr[j]);  // Swap misplaced 0 and 1
            i++;
            j--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortOne(arr, n);
    printArray(arr, n);

    return 0;
}
