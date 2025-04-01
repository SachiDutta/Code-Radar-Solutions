
void fibonacciSeries(int num) {
    static int a = 0, b = 1;  
    static int count = 0;     
    
    if (count == num)  
        return;

    printf("%d ", a);   // Print the current Fibonacci number
    int next = a + b;   // Calculate next Fibonacci number
    a = b;              // Shift values
    b = next;
    count++;            // Increase counter

    fibonacciSeries(num);  // Recursive call
}