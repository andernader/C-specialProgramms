#include "header.h"

void fibonacciSeries(){
    int arr[101];
    arr[0] = 0;
    arr[1] = 1;
    int x;
    printf("\nFibonacci series ==> arr[i] = arr[i-1] + arr[i-2]");
    printf("\nEnter the number of Fibonacci Series you wanna get\nN = ");
    scanf("%d%*[^\n]", &x);
    printf("\narr[0] = 0\narr[1] = 1\n");
    for(int i = 2; i <= x; i++){
        arr[i] = arr[i-1] + arr[i-2];
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

