#include "header.h"

void palindromeCheck(){
    printf("\nA Palindrome number is a number if flipped is the same as before ex. 161 ==> 161");
    printf("\nEnter a Number or a Word you wanna check whether it is Palindrome or not :\n");
    char str[100];
    char tempStr[100];
    scanf("%s%*[^\n]", str);
    printf("\nThe Number/Word you entered : %s\n", str);
    size_t length_str = strlen(str);
    strcpy(tempStr, str);

    for(int i = 0; i < length_str/2; i++){
        char temp = str[i];
        str[i] = str[length_str - 1 - i];
        str[length_str - 1 - i] = str[i];
    };
    printf("The flipped Number/Word is : %s\n", str);
    if(strcasecmp(str, tempStr) == 0)
        printf("The Number/Word is Palindrome!\n");
    else
        printf("The Number/Word is not Palindrome!\n");
}
