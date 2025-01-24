#include "header.h"

void floydTriangle(){
    printf("\nEnter the number of rows you want in your Floyd's Triangle\nRows = ");
    int a;
    int temp = 0;
    scanf("%d%*[^\n]", &a);
    printf("\n");
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            printf("%2d ", ++temp);
        }printf("\n");
    }
    printf("\n");
}
