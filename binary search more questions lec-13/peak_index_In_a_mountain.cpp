#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if the middle element is greater than its next element
        if (arr[mid] > arr[mid + 1]) {
            // If true, the peak is on the left side or it is mid
            right = mid;
        } else {
            // If false, the peak is on the right side
            left = mid + 1;
        }
    }

    // Left and right will converge to the peak index
    return left;
}

int main() {
    vector<int> arr = {0, 2, 3, 4 , 5, 3, 1}; // Example mountain array
    cout << "Peak index: " << peakIndexInMountainArray(arr) << endl;
    return 0;
}
