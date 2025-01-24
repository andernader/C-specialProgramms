#include "header.h"

void powerTo(){
    printf("\nEnter the number you wanna calculate its power by the form A ^ B\nExample: 2 ^ 3 = 8\n\nA = ");
    int a, b;
    float result = 1;
    scanf("%d%*[^\n]", &a);
    printf("B = ");
    scanf("%d%*[^\n]", &b);
    int temp_b = b;
    if(temp_b > 0){
        for(; temp_b!= 0; temp_b--){
            result = result * a;
        }
        printf("\n%d ^ %d = %d\n", a, b, (int)result);
    }else if(temp_b < 0){
        for(; temp_b!= 0; temp_b++){
            float temp_a = 1.0f/a;
            result = result * temp_a;
        }
        printf("\n%d ^ %d = %.4f\n", a, b, result);
    }
}
