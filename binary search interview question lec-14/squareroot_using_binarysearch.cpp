#include <iostream>
using namespace std;

int binarySearchSqrt(int n) {
    if (n < 2) {
        return n; // The square root of 0 or 1 is the number itself
    }

    int start = 0, end = n;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        long long square = (long long)mid * mid;

        if (square == n) {
            return mid; // Perfect square
        } else if (square < n) {
            ans = mid; // Store the floor value of sqrt
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter a number to find its square root: ";
    cin >> number;

    if (number < 0) {
        cout << "Square root of a negative number is not defined in real numbers." << endl;
        return 0;
    }

    int result = binarySearchSqrt(number);
    cout << "The floor of the square root of " << number << " is " << result << endl;

    return 0;
}
