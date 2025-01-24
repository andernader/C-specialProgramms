#include "header.h"

void addHalfAdder(){
    printf("\nEnter the numbers you wanna add\nA = ");
    int a, b;
    scanf("%d%*[^\n]", &a);
    printf("B = ");
    scanf("%d%*[^\n]", &b);
    int temp_a = a, temp_b = b;
    while(temp_b != 0){
        int sum = temp_a ^ temp_b;
        int carry = (temp_a & temp_b) << 1;
        temp_a = sum;
        temp_b = carry;
    }
    printf("\nAdding these two numbers using HalfAdder\n\n%d + %d = %d\n", a, b, temp_a);
}
