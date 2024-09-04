#include <stdio.h>
#include <stdlib.h>

int main(){

	int operation;
	int a;
	int b;
	
	printf("\nEnter number 1: ");
	scanf("%d",&a);
	
	printf("\nEnter number 2: ");
	scanf("%d",&b);
	
	printf("\nSelect Operator: \n");
	printf("1.Add\n");
	printf("2.Subtract\n");
	printf("3.Multiply\n");
	printf("4.Divide\n");
	printf("\nWhat operations do you want to perform on %d and %d (1/2/3/4): ",a,b);
	scanf("%d",&operation);
	
	if(operation == 1){
		printf("\nThe sum of %d and %d is : %d\n",a,b,a+b);
	}
	else if(operation == 2){
		printf("\nThe diff of %d and %d is : %d\n",a,b,abs(a-b));
	}
	else if(operation == 3){
		printf("\nThe product of %d and %d is : %d\n",a,b,a*b);
	}
	else if(operation == 4){
		printf("\nThe Division of %d and %d is : %.2f\n",a,b,(float)a/(float)b);
	}
	
	return 0;
}
