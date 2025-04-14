
#include <stdio.h>


int main(){

	int num1 , num2;
	
	printf("\nEnter two numbers--->\n");
	printf("Number 1: ");
	scanf("%d", &num1);
	printf("Number 2: ");
	scanf("%d", &num2);
	
	printf("\nBitwise Operations Results:\n");
	
	printf("num1 & num2 = %d\n", num1 & num2);
	printf("num1 | num2 = %d\n", num1 | num2);
	printf("num1 ^ num2 = %d\n", num1 ^ num2);
	printf("~num1 = %d\n", ~num1);
	printf("num1 << 2 = %d\n", num1 << 2);
	printf("num2 >> 2 = %d\n", num2 >> 2);

	return 0;
}
