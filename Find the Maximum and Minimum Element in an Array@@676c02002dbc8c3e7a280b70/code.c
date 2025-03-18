#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 1) return arr[0]; // Single element case

    for (int i = 0; i < n; i++) {
        if ((i == 0 && arr[i] > arr[i + 1]) ||  // First element case
            (i == n - 1 && arr[i] > arr[i - 1]) ||  // Last element case
            (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) { // Middle peak
            return arr[i];
        }
    }
    return -1; // No peak found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", findFirstPeak(arr, n));
    return 0;
}
