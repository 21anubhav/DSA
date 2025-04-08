#include <iostream>
#include <vector>
#include <algorithm> // Needed for sort()

using namespace std;

// Function to check if cows can be placed with a minimum distance of 'mid'
bool isPossible(vector<int>& stalls, int k, int mid) {
    int cowCount = 1;  // Place first cow at the first stall
    int lastPosition = stalls[0];

    for (int i = 1; i < stalls.size(); i++) { // Start from second stall
        if (stalls[i] - lastPosition >= mid) { // Check if we can place a cow
            cowCount++;
            lastPosition = stalls[i];

            if (cowCount == k) {
                return true; // All cows placed successfully
            }
        }
    }
    return false; // Not possible to place all cows
}

// Function to find the largest minimum distance
int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end()); // Sort stall positions
    int n = stalls.size();

    int s = 1; // Minimum possible distance
    int e = stalls[n - 1] - stalls[0]; // Maximum possible distance
    int ans = -1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(stalls, k, mid)) {
            ans = mid; // Update answer
            s = mid + 1; // Try for a larger minimum distance
        } else {
            e = mid - 1; // Reduce the distance
        }
    }
    return ans; // Return the largest minimum distance
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9}; // Example stall positions
    int k = 3; // Number of cows

    cout << "Largest Minimum Distance: " << aggressiveCows(stalls, k) << endl;
    return 0;
}
