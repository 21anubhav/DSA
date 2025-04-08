
#include <iostream>
#include <climits> 
using namespace std;

int getmax(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) { 
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max; // Return the max value
}

// Function to find the minimum value in an array
int getmin(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) { 
        if (num[i] < min) {
            min = num[i];
        }
    }
    return min; // Return the min value
}

int main() {
    int size;
    cin >> size;

    int num[100];

    // Input taking
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    // Call the functions and print the results
    cout << "Maximum value: " << getmax(num, size) << endl;
    cout << "Minimum value: " << getmin(num, size) << endl;

    return 0;
}