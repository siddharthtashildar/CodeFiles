#include <stdio.h>


int factorial(int n);

int main(){
	int n;
	int fac;
	printf("\nEnter number: ");
	scanf("%d",&n);
	fac = factorial(n);
	
	printf("\n The factorial of %d is: %d\n",n,fac);
	return 0;
}

int factorial(int n){
	if (n == 1) {return n;}
	else{
		return n * factorial(n-1);
	}
}
