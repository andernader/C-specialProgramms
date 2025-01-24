#include "header.h"

void armstrongNumber(){
    printf("\nArmstrong number is a number equal to the sum of power of its digits, ex: 153 == 1^3+5^3+3^3");
    printf("\nEnter the number you wanna check whether it is an Armstrong number or not :\nNumber = ");
    int number;
    scanf("%d%*[^\n]", &number);
    int temp = number;
    int digits = 0;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    temp = number;
    int result = 0;
    for(int i = 1; i <= digits; i++){
        int reminder = temp % 10;
        result = result + (int)pow(reminder, digits);
        temp /= 10;
    }
    printf("\nNumber = %d\nCalculated number = %d\n", number, result);
    if(result == number)
        printf("%d is an Armstrong number!\n", number);
    else
        printf("%d is not an Armstrong number!\n", number);
}
