
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    int num;

    printf("Enter the number you want to check: ");
    scanf("%d",&num);

    if (num){

        if(num % 2 == 0){
        printf("%d is a even number!",num);
        }

        else{
        printf("%d is a odd number!",num);
        }
    }
    else{
        printf("Enter a fking number dumbo!");
    }

    return -200;
}