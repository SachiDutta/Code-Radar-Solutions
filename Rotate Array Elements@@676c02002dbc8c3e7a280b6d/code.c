#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array right by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // To handle cases where K > N
    reverse(arr, 0, n - 1);     // Step 1: Reverse entire array
    reverse(arr, 0, k - 1);     // Step 2: Reverse first K elements
    reverse(arr, k, n - 1);     // Step 3: Reverse remaining N-K elements
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;
    scanf("%d", &n);  // Read array size
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }
    
    scanf("%d", &k);  // Read K value
    
    rotateArray(arr, n, k);
    printArray(arr, n);

    return 0;
}
