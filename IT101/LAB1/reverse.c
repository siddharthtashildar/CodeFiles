#include <stdio.h>

int main(){

	int num;
	int reversed = 0;
	int temp_digit;
	
	printf("Enter your number to reverse: ");
	scanf("%d",&num);
	
	printf("\nEntered Number----> %d\n",num);
	
	while(num != 0){
	
		temp_digit = num % 10;
		num = num / 10;
		reversed = reversed * 10 + temp_digit;

	}
	
	printf("\nReversed Number----> %d\n",reversed);

	return 0;	
}
