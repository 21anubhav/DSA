#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) //for round 1 to n-1
     {
        for (int j = 0; j < n - i - 1; j++) //for inside array checking value 
         {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    
    bubblesort(arr, n);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
