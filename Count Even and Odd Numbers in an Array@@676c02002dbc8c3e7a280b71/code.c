#include <stdio.h>

void countEvenOdd(int arr[], int n) {
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Even count: %d, Odd count: %d\n", evenCount, oddCount);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    countEvenOdd(arr, n);
    return 0;
}
