#include <stdio.h>

int main(){
	
	int radius;
	float pi = 3.14;
	float area;
	float circm;
	
	printf("\nEnter your Radius: ");
	scanf("%d",&radius);
	
	circm = 2 * pi * radius;
	area = pi * radius *radius ; 
	
	printf("\nThe Crcumference of Circle with radius %d is : %.2f\n",radius,circm); 
	printf("The Area of Circle with radius %d is : %.2f\n",radius,area); 


	return 0;	
}
