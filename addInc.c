#include "header.h"

void addInc(){
    printf("\nEnter the numbers you wanna add :\nA = ");
    int a, b;
    scanf("%d%*[^\n]", &a);
    printf("B = ");
    scanf("%d%*[^\n]", &b);
    int temp = a;
    if(b > 0){
        for(int i = 1; i <= b; i++)
            temp++;
    }
    else if(b < 0){
        for(int i = 1; i <= -b; i++)
            temp--;
    };
    printf("\nUsing the INC/DEC method to add without add operator\n\n%d + %d = %d\n", a, b, temp);
}
