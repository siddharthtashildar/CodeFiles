#include <stdio.h>

int main(){

    int n;
    int num1=0 ;
    int num2 =1;
    int next_number;

    printf("\nEnter your number: ");
    scanf("%d",&n);

    for(int i = 0; i <= n;i++){

        next_number =num1 + num2;    
        printf("\n%dnt Number: %d ",i,next_number);

        num1 = num2;
        num2 = next_number;
    }
    printf("\nYour Final Number ----> %d",next_number);
    

    return 0;