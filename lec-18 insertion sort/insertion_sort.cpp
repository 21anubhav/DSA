#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++) {  //i=1 coz we have considered the 0 element already sorted
        int temp = arr[i];
        int j = i - 1;
        
        // Shift elements to the right to make space for temp
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = temp;  // Insert temp at correct position
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};
    int n = arr.size();

    insertionSort(arr, n);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
