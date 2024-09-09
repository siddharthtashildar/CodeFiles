#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



bool isPalindrome(int x) {
    int num = abs(x);
    int temp;
    int reversed = 0;

    while (num != 0)
    {
        temp = num % 10;
        reversed = (reversed * 10) + temp;
        num = num/10;
    }

    if(x == reversed){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){

    int n;
    printf("\nEnter Your Number: ");
    scanf("%d",&n);

    if(isPalindrome(n)){
        printf("\nThe Number is Palid!\n");
    }
    else{
       printf("\nThe Number is Not Palid!\n"); 
    }


    return 0;
}