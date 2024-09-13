#include <stdio.h>

int main(){

    int x;
    int result = 0;
    int n;
    int reversed_result = 0 ;
    int temp;

    printf("\nEnter the Number: ");
    scanf("%d",&x);

    while(x != 0){
        
        n = x % 8;
        result = (result * 10) + n;
        x = x/8;
    }

    while(result != 0){
	
		temp = result % 10;
		result = result / 10;
		reversed_result = reversed_result * 10 + temp;
	}

    printf("\n%d\n",reversed_result);


    return 0;
}