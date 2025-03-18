#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;  // Handle cases where k > n
    int temp[k];

    // Store last k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy back k elements from temp to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    rotateRight(arr, n, k);

    // Print output with each element in a new line
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
