int isPrime(int num) {
    if (num <= 1) return; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}


void printPrimesInRange(int a, int b) {
    
    for (int num = a; num <= b; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}