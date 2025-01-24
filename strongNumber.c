#include "header.h"

int factorial(int a);

void strongNumber(){
    printf("\nA Strong number ex = 145 => 1!+4!+5! == 145 it is a Strong number");
    printf("\nEnter the number you wanna check whether it is a Strong number or not\n");
    printf("Number : ");
    int number;
    scanf("%d%*[^\n]", &number);
    int temp = number;
    int result = 0;
    while(temp != 0){
        int reminder = temp % 10;
        result = result + factorial(reminder);
        temp /= 10;
    }
    printf("\nNumber = %d\nCalculated number = %d\n", number, result);
    if(result == number)
        printf("%d is a Strong number!\n", number);
    else
        printf("%d is not a Strong number!\n", number);
}

int factorial(int a){
    int temp = a;
    int result = 1;
    while(temp != 0){
        result = result * temp;
        temp--;
    }
    return result;
}
