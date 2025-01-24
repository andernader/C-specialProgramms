#include "header.h"

int main()
{
    printf("Enter which special program you want to run :\n");
    printf(" 1. Pyramid Of Stars\n 2. Palindrome Check\n 3. Armstrong Number\n 4. Strong Number\n 5. Prime Number\n 6. Add Using INC/DEC\n");
    printf(" 7. Add using HalfAdder\n 8. Add using FullAdder\n 9. Find Fibonacci Series\n10. Find Floyd's Triangle\n11. Binary To Decimal\n12. Power of a number\n13. A Leap Year\n14. Perfect Number\n\n");
    int select;
    scanf("%d%*[^\n]", &select);
    switch(select){
        case 1: pyramidOfStars();break;
        case 2: palindromeCheck();break;
        case 3: armstrongNumber();break;
        case 4: strongNumber();break;
        case 5: primeNumber();break;
        case 6: addInc();break;
        case 7: addHalfAdder();break;
        case 8: addFullAdder();break;
        case 9: fibonacciSeries();break;
        case 10:floydTriangle();break;
        case 11:binaryToDecimal();break;
        case 12:powerTo();break;
        case 13:leapYear();break;
        case 14:perfectNumber();break;
    }
    return 0;
}
