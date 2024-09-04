#include <stdio.h>

int main(){

    int n;
    int num1=0 ;
    int num2 =1;
    int next_number;
    float ratio;


    printf("\nEnter your number: ");
    scanf("%d",&n);

    for(int i = 1; i <= n;i++){

        next_number =num1 + num2;    
        printf("\n%dnt Number: %d ",i,next_number);

        if(num1 != 0){                        
        ratio = (float)num2 / (float)num1;
        printf("\nRatio for %d and %d : %.2f\n",num2,num1,ratio);
        }
        else if (num1 == 0){
            printf("\nFirst ratio is infinte as we are dividng by a zero.\n");
        }
        num1 = num2;
        num2 = next_number;
    }
    printf("\n#-----------------#\n");
    printf("\nYour Final Number ----> %d",next_number);
    

    return 0;
}