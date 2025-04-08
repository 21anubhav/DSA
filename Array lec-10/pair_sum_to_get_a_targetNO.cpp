#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<pair<int, int>> pairSum(vector<int>& ARR, int S) {
    vector<pair<int, int>> pairs;
    unordered_set<int> seen;
    for (int num : ARR) {
        if (seen.count(S - num)) {
            pairs.push_back({min(num, S - num), max(num, S - num)});
            seen.erase(S - num);
        } else seen.insert(num);
    }
    return pairs;
}

int main() {
    int N, S;
    cout << "Enter size and target sum: ";
    cin >> N >> S;
    
    vector<int> A(N);
    cout << "Enter array: ";
    for (int& x : A) cin >> x;
    
    vector<pair<int, int>> sumPairs = pairSum(A, S);
    for (auto& p : sumPairs) cout << p.first << " " << p.second << "\n";
    
    return 0;
}
