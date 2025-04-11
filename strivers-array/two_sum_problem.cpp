#include <iostream>
#include <algorithm>
using namespace std;

void twosum(int arr[], int n, int k) {
    sort(arr, arr + n);

    int i = 0;
    int j = n - 1;

    while (i < j) {
        int sum = arr[i] + arr[j];

        if (sum == k) {
            cout << "FOUND SUM: " << arr[i] << " + " << arr[j] << " = " << k << endl;
            return; 
        }
        else if (sum < k) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << "No pair found with sum " << k << endl;
}

int main() {
    int arr[] = {2, 1, 5, 3, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8;

    twosum(arr, n, k);

    return 0;
}
