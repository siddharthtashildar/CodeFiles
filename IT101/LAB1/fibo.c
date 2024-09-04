#include <stdio.h>

int main(){

	int n;

	int num1=0;
	int num2=1;
	int next_number;
	float ratio;
	
	printf("\nEnter your number: ");

	scanf("%d",&n);
	
	printf("\nHeres your series---> \n");


	printf("\nHeres the first number---> 0\n");
	
	for(int i = 1; i <= n; i++){
	
	next_number = num2 + num1 ;
	printf("\nHeres next number---> %d",next_number);
	
	if(num1 != 0){ //here i am checking if num1 is zero or not so i dont get infinite error
	ratio = (float)num2/(float)num1;
	printf("\nRatio for %d and %d is : %.2f\n",num2,num1,ratio);
	}
	else if(num1 == 0){
	printf("\nFirst ratio is infinite as we are dividing by Zero!\n");
	}
	
	num1 = num2;
	num2 = next_number;
	}	
	return 0;	
}
