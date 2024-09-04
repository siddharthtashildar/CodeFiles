#include <stdio.h>

int main(){

    int num ;
    int remainder;
    int remain;
    int sum = 0;

    printf("Enter your number: ");
    scanf("%d",&num);

    if(num){
        while(num != 0){
        sum += num % 10;
        num = num / 10;
        }
        printf("\nyour sum : %d",sum);
    }
    else{
        printf("Enter a number!");
    }


    return 0;
}