int fibonacci(int num) {
    if (num == 0) return 0; 
    if (num == 1) return 1;  
    return fibonacci(num - 1) + fibonacci(num - 2);  
}


void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  
    }
}