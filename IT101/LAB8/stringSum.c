#include <stdio.h>

int main() {
    
    char num1[10];
    char num2[10];

    scanf("%s %s",num1,num2);

    char sum[] = num1  + num2;

    printf("\n The Sum is %s \n",sum);

    return 0;
}