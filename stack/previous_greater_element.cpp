#include <bits/stdc++.h>
using namespace std;

void printStockSpan(int arr[], int n) {
    stack<int> s;
    cout << 1 << " "; // Span of first element is always 1
    s.push(0); // Store index instead of value

    for (int i = 1; i < n; i++) {
        while (!s.empty() && arr[s.top()] <= arr[i])
            s.pop();

        int span = (s.empty()) ? (i + 1) : (i - s.top());
        cout << span << " ";
        s.push(i);
    }
}

int main() {
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    printStockSpan(arr, n);
    return 0;
}
