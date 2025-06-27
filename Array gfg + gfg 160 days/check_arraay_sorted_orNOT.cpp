#include <iostream>
using namespace std;

bool sortedornot(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 10, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sortedornot(arr, n);  
    return 0;
}
