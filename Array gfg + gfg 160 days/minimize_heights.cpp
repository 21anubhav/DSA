#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinDiff(vector<int> &arr, int k) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int ans = arr[n - 1] - arr[0]; 

    int smallest, largest;

    for (int i = 1; i < n; i++) {
        if (arr[i] - k < 0)
            continue;

        smallest = min(arr[0] + k, arr[i] - k);
        largest = max(arr[i - 1] + k, arr[n - 1] - k);

        ans = min(ans, largest - smallest);
    }

    return ans;
}

int main() {
    int k = 6;
    vector<int> arr = {12, 6, 4, 15, 17, 10};

    int ans = getMinDiff(arr, k);
    cout << "Minimum difference: " << ans << endl;

    return 0;
}
