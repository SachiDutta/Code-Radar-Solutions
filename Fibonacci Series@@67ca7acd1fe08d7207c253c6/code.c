int fibonacciSeries(int num){
    if(num==0)
    return 0;
    if(num==1)
    return 1;
    return fibonacciSeries(num-1) + fibonacciSeries(num-2);
}