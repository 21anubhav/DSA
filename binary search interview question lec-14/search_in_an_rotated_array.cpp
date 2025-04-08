
// #include <iostream>
// using namespace std;

// int searchInRotatedArray(int arr[], int n, int key) {
//     int start = 0;
//     int end = n - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         // Check if key is found
//         if (arr[mid] == key) {
//             return mid;
//         }

//         // Check which half is sorted
//         if (arr[start] <= arr[mid]) {
//             // Left half is sorted
//             if (key >= arr[start] && key < arr[mid]) {
//                 end = mid - 1; // Search left half
//             } else {
//                 start = mid + 1; // Search right half
//             }
//         } else {
//             // Right half is sorted
//             if (key > arr[mid] && key <= arr[end]) {
//                 start = mid + 1; // Search right half
//             } else {
//                 end = mid - 1; // Search left half
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {7, 8, 1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 3;

//     int result = searchInRotatedArray(arr, n, key);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }


//IMPORTANT


#include <iostream>
using namespace std;

int getpivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findposition(int arr[], int n, int k) {
    if (n == 0) return -1;
    if (n == 1) return (arr[0] == k) ? 0 : -1;

    int pivot = getpivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarysearch(arr, pivot, n - 1, k);
    } else {
        return binarysearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    int arr[] = {7, 8, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int position = findposition(arr, n, key);
    if (position != -1) {
        cout << "Element found at index: " << position << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}