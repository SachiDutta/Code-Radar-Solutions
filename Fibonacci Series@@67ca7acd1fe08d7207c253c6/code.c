void fibonacciSeries(int num, int a, int b) {
    if (num == 0) return;
    printf("%d ", a); 
    fibonacciSeries(num - 1, b, a + b); 
}