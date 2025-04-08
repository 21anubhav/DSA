#include <iostream>
#include <vector>
using namespace std;

// Function to check if it is possible to allocate books with the given max pages limit
bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false; // If a single book has more pages than 'mid', allocation is not possible
        }

        if (pagesSum + arr[i] > mid) {
            studentCount++; // Allocate to next student
            pagesSum = arr[i];

            if (studentCount > m) {
                return false; // More students than allowed
            }
        } else {
            pagesSum += arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int>& arr, int n, int m) {
    if (m > n) return -1; // More students than books, not possible

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1; // Try for a better (minimum) answer
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main() {
    vector<int> books = {10,20,30,40}; // Example book pages
    int n = books.size(); // Number of books
    int m = 2; // Number of students

    int result = allocateBooks(books, n, m);
    cout << "Minimum Maximum Pages: " << result << endl;

    return 0;
}
