#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(const vector<int>& A, const vector<int>& B) {
    vector<int> intersection;
    int i = 0, j = 0;
    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) i++;
        else if (A[i] > B[j]) j++;
        else {
            if (intersection.empty() || intersection.back() != A[i]) 
                intersection.push_back(A[i]);
            i++; j++;
        }
    }
    return intersection;
}

int main() {
    int N, M;
    cout << "Enter sizes of two arrays: ";
    cin >> N >> M;
    
    vector<int> A(N), B(M);
    cout << "Enter first array: ";
    for (int& x : A) cin >> x;
    cout << "Enter second array: ";
    for (int& x : B) cin >> x;
    
    vector<int> result = findIntersection(A, B);
    
    cout << "Intersection: ";
    for (int num : result) cout << num << " ";
    cout << endl;
    
    return 0;
}
