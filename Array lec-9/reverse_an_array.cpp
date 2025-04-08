#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int brr[7] = {1, 2, 3, 4, 5, 6, 7};

    reverse(arr, 10);
    reverse(brr, 7);

    printarray(arr, 10);
    printarray(brr, 7);

    return 0;
}


