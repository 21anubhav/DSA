#include <iostream>
using namespace std;

const int MAX = 50; // maximum number of rows supported

// Generates a single row of Pascal's triangle
void generateRow(int rowNum, long long row[]) {
    long long val = 1;
    row[0] = val;

    for (int col = 1; col < rowNum; col++) {
        val = val * (rowNum - col);
        val = val / col;
        row[col] = val;
    }
}

// Prints the entire Pascal's triangle up to n rows
void pascalTriangle(int n) {
    long long row[MAX];

    for (int i = 1; i <= n; i++) {
        generateRow(i, row);
        for (int j = 0; j < i; j++) {
            cout << row[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    pascalTriangle(n);
    return 0;
}
