#include "header.h"

void leapYear(){
    printf("\nEnter the year you wanna check whether it is a Leap year or not\nYear = ");
    int year;
    scanf("%d%*[^\n]", &year);
    if((year%400 == 0) || (year%400!=0 && year%100!=0 && year%4==0))
        printf("\n%d year is a leap year!\n", year);
    else
        printf("\n%d is not a leap year!\n", year);
}
