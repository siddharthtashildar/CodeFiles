#include <stdio.h>


int main(){

    int num;
    printf("\nEnter your number: ");
    scanf("%d",&num);
    int factorial = 1;

    if(num){
        for(int i = 1; i <= num; i++){
            factorial = factorial * i;
        }

        printf("\nThe factorial of %d is %d",num,factorial);

    }
    else{
        printf("ENter a fkin Number!");
    }


    return 0;
}