#include "header.h"

void binaryToDecimalRep();
void binaryToDecimalConv();

void binaryToDecimal(){
    printf("\nDo you want to see a representation or actually convert a Binary number to a Decimal number?\n");
    printf(" 1. for Converting\n 2. for Representation explaining\n\n");
    int temp;
    scanf("%d%*[^\n]", &temp);
    switch(temp){
        case 1: binaryToDecimalConv();break;
        case 2: binaryToDecimalRep();break;
    }
}

void binaryToDecimalRep(){
    int a;
    printf("\nEnter the number in Decimal format\nA = ");
    scanf("%d%*[^\n]", &a);
    int result = 0;
    printf("\n");
    for(int i = 0; a != 0; i++){
        int temp = a;
        temp = temp & 1;
        result = result + temp * (int)pow(2,i);
        printf("temp = %d     i = %d     temp * pow(2,%d) = %d     result = %d\n", temp, i, i, temp*(int)pow(2,i), result);
        a = a >> 1;
    }
    printf("\nBinary to Decimal conversion ==> result = %d\n", result);
}

void binaryToDecimalConv(){
    printf("\nEnter the number in Binary format\nN = ");
    int n;
    int weight = 1;
    int result = 0;
    scanf("%d%*[^\n]", &n);
    int temp_n = n;
    while(temp_n != 0){
        int reminder = temp_n % 10;
        result = result + reminder * weight;
        temp_n = temp_n / 10;
        weight = weight * 2;
    }
    printf("\n%d from Binary representation into Decimal representation ==> result = %d\n", n, result);
}
