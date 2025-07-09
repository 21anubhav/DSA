#include <bits/stdc++.h>
using namespace std;

void stockspan(int arr[], int n) {
    stack<int> s;
    vector<int> span(n);
    
    s.push(0);
    span[0] = 1; // First day's span is always 1
    cout << span[0] << " ";

    for(int i = 1; i < n; i++) {
        while (!s.empty() && arr[s.top()] <= arr[i])
            s.pop();

        span[i] = (s.empty()) ? (i + 1) : (i - s.top());

        cout << span[i] << " ";
        s.push(i);
    }
    cout << endl;
}

int main() {
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

    stockspan(arr, n);

    return 0;
}
