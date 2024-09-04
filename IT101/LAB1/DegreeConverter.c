#include <stdio.h>

int main(){
	
	float Fah;
	float Cel;
	
	printf("\nEnter your Temperature in Celsius: ");
	scanf("%f",&Cel);
	
	Fah =(Cel * 9/5) + 32;
	
	printf("\nThe Temperature in Fahrenhite for %.2f degree celsius is : %.2f\n",Cel,Fah); 


	return 0;	
}
