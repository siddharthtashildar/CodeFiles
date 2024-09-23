
#include <stdio.h>

int gcd(int a , int b){
	
	if(a == 0 || b == 0){
		return a+b;
	}
	else{
		if(a >= b){
			return gcd(a-b,b);
		}
		else{
			return gcd(a,b-a);
		}
	}
}

int main(){

	int num1;
	int num2;
	printf("\nEnter your Numbers: ");
	scanf("%d %d",&num1,&num2);
	
	int g = gcd(num1,num2);
	
	printf("\nThe GCD for %d and %d is : %d\n",num1,num2,g);
	return 0;
}


