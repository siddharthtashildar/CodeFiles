#include <stdio.h>

int main(){

    int year;

    printf("\nEnter your year: ");
    scanf("%d",&year);

    printf("\nConfirmation the year you entered is %d \n",year);

    if(year){
        if(year % 4 == 0 || year % 400 == 0){
            printf("\n%d is a leap year! so what?",year);
        }
        else{
            printf("\n%d is not a leap year! who cares btw?",year);
        }
    }
    else{
        printf("\nEnter a number!");
    }

    return 0;
}