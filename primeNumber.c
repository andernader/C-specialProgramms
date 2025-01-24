#include "header.h"

void primeNumber(){
    printf("P.S: ceil(sqrt(number));");
    printf("\nEnter the number you wanna check whether it is a Prime number or not\n");
    printf("The number : ");
    int number;
    scanf("%d%*[^\n]", &number);
    int temp = (int)ceil(sqrt(number));
    int result;
    for(int i = 2; i <= temp; i++){
        if(number % i == 0)
            result = 0;
        else
            result = 1;
    };
    if(((result == 1) && number != 1) || number == 2 || number == 3)
        printf("\n%d is a Prime number!\n", number);
    else
        printf("\n%d is not a Prime number!\n", number);
}
