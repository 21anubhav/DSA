#include <iostream>
#include <cstring>
using namespace std;

#define MAX 1000000

int maximumOccurredElement(int L[], int R[], int n) {
    int arr[MAX] = {0};

    int maxR = 0;
    for (int i = 0; i < n; i++) {
        arr[L[i]]++;
        arr[R[i] + 1]--;
        if (R[i] > maxR)
            maxR = R[i];
    }

    int maxFreq = arr[0], index = 0;
    for (int i = 1; i <= maxR; i++) {
        arr[i] += arr[i - 1];
        if (arr[i] > maxFreq) {
            maxFreq = arr[i];
            index = i;
        }
    }

    return index;
}

int main() {
    int L[] = {1, 4, 9, 13, 21};
    int R[] = {15, 8, 12, 20, 30};
    int n = sizeof(L) / sizeof(L[0]);

    cout << maximumOccurredElement(L, R, n) << endl;
    return 0;
}
