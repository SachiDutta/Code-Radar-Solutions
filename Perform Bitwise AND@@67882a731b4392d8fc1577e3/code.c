#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input
    scanf("%d %d", &a, &b);

    // Performing bitwise OR
    int result = a & b;

    // Printing the result
    printf("%d\n", result);

    return 0;
}
