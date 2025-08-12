#include <bits/stdc++.h>
using namespace std;

const int n = 3;

void rotatematrix(int mat[n][n]) {
    // Transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(mat[i], mat[i] + n);
    }
}

int main() {
    int mat[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotatematrix(mat);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
  