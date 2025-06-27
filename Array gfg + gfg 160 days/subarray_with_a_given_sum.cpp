#include <stdio.h>

int subArraySum(int arr[], int n, int sum) {
    int start = 0, curr_sum = 0;

    for (int end = 0; end < n; end++) {
        curr_sum += arr[end];

        while (curr_sum > sum && start <= end)
            curr_sum -= arr[start++];

        if (curr_sum == sum) {
            printf("Sum found between indexes %d and %d\n", start, end);
            return 1;
        }
    }

    printf("No subarray found\n");
    return 0;
}

int main() {
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;

    subArraySum(arr, n, sum);
    return 0;
}
