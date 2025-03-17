#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {  // Loop from 2 to sqrt(num)
        if (num % i == 0) return 0;  
    }
    return 1;  

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        int num;
        scanf("%d", &num);  
        printf("%d\n", isPrime(num));  
    }
    return 0;
}
