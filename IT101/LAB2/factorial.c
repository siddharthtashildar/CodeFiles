#include <stdio.h>

int main(){

	int n;
	int fact = 1;
	
	printf("\nEnter your Number: ");
	scanf("%d",&n);
	
	for(int i = 1; i <= n;i++){
		fact = fact * i;
	}
	
	printf("\nThe factorial of %d is %d\n",n,fact);


	return 0;
}
