#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	
	printf("Enter your First Number: ");
	scanf("%d",&num1);
	
	printf("Enter your Second Number: ");
	scanf("%d",&num2);
	
	printf("\nEntered numbers ---> %d %d\n",num1,num2);
	
	num2 = num1 + num2;
	num1 = num2 - num1;
	num2 = num2 - num1;
	
	printf("\nSwaped Numbers ----> %d %d\n",num1,num2);


	return 0;	
}
