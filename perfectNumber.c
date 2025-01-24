#include "header.h"

void perfectNumber(){
    printf("\nA perfect number is a number that the sum of its divisors excluding itself is equal to the number itself. ex. 6");
    printf("\nEnter a number you wanna check whether it is a Perfect number or not\nNumber = ");
    int number;
    scanf("%d%*[^\n]", &number);
    int sum = 0, reminder = 0;
    for(int i = 1; i<number; i++){
        reminder = number % i;
        if(reminder == 0){
            sum = sum + i;
        }
    }
    if(sum == number)
        printf("\n%d is a perfect number!\n", number);
    else
        printf("\n%d is not a perfect number!\n", number);
}
