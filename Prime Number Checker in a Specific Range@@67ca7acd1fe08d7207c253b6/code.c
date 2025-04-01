int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}


void printPrimesInRange(int a, int b) {
      if (start < 2) {
        start = 2;
    }
    
    int (num = a; num <= b; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}